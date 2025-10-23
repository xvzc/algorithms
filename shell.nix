# save this as shell.nix
{
  pkgs ? import <nixpkgs> { },
}:
pkgs.mkShell {
  buildInputs = with pkgs; [
    clang # Or gcc
    llvmPackages.libcxx
    gcc
    # other dependencies
  ];
  packages = with pkgs; [
    clang-tools
    black
    (pkgs.python312.withPackages (
      ppkgs: with ppkgs; [
        pip
        python-lsp-server
        black
        flake8
      ]
    ))
  ];

  shellHook = # sh
    ''
      export CPLUS_INCLUDE_PATH="$HOME/.config/assets/clang/include";
      export CLANGD_FLAGS="--header-insertion=never";
    '';
}
