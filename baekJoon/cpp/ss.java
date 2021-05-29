
		HashSet<String> srcNeNameSet= new HashSet<>();
		Specification<OtnUiLinkmng> srcNeNodeSpec = Specification.where(null);
		otnUiLinkmngRepository.findAll(srcNeNodeSpec).forEach(e -> srcNeNameSet.add(e.getSrcNeName()));

		List<Map<String, Object>> srcNeNameList = new ArrayList<>();
		for(String srcNeName: srcNeNameSet){
			Map<String, Object> srcNeNameContainer = new HashMap<>();

			HashSet<String> srcShelfIdSet = new HashSet<>();
			Specification<OtnUiLinkmng> srcShelfIdSpec = srcNeNodeSpec.and(new OtnSpecification<OtnUiLinkmng>(new SearchCriteria("srcNeName","=", srcNeName)));
			otnUiLinkmngRepository.findAll(srcShelfIdSpec).forEach(e -> srcShelfIdSet.add(e.getSrcShelfId()));

			List<Map<String, Object>> srcShelfIdList = new ArrayList<>();
			for(String srcShelfId : srcShelfIdSet){
				Map<String, Object> srcShelfIdContainer = new HashMap<>();

				HashSet<String> srcSlotIdSet = new HashSet<>();
				Specification<OtnUiLinkmng> srcSlotIdSpec = srcShelfIdSpec.and(new OtnSpecification<OtnUiLinkmng>(new SearchCriteria("srcShelfId","=", srcShelfId)));
				otnUiLinkmngRepository.findAll(srcSlotIdSpec).forEach(e -> srcShelfIdSet.add(e.getSrcShelfId()));

				List<Map<String, Object>> srcSlotIdList = new ArrayList<>();
				for(String srcSlotId : srcSlotIdSet){
					Map<String, Object> srcSlotIdContainer = new HashMap<>();

					HashSet<String> srcPortIdSet = new HashSet<>();
					Specification<OtnUiLinkmng> srcPortIdSpec = srcSlotIdSpec.and(new OtnSpecification<OtnUiLinkmng>(new SearchCriteria("srcSlotId","=", srcSlotId)));
					otnUiLinkmngRepository.findAll(srcShelfIdSpec).forEach(e -> srcPortIdSet.add(e.getSrcShelfId()));

//					srcSlotIdContainer.put("name", srcSlotId);
					srcShelfIdContainer.put("name", srcShelfId);
//					srcSlotIdContainer.put("src_slot_id", srcPortIdList);
					srcSlotIdList.add(srcSlotIdContainer);
				}

				srcNeNameContainer.put("name", srcNeName);
				srcShelfIdContainer.put("src_shelf_id", srcSlotIdList);
				srcShelfIdList.add(srcShelfIdContainer);
			}

			srcNeNameContainer.put("src_ne_name", srcShelfIdList);
			srcNeNameList.add(srcNeNameContainer);
		}

		data.put("option", srcNeNameList);
		System.out.println(data);
