
/*******************************************************************************
* This file was generated by UI Builder.
* This file will be auto-generated each and everytime you save your project.
* Do not hand edit this file.
********************************************************************************/

#include "uib_datasources.h"

#include "uib_hass_entity_datamodel.h"
uib_datamodel_context* hass_entity_datamodel_context = NULL;

uib_datamodel_context* get_hass_entity_datamodel_context() {
	if (hass_entity_datamodel_context == NULL) {
		hass_entity_datamodel_context = (uib_datamodel_context*) malloc(sizeof(uib_datamodel_context));
		hass_entity_datamodel_context->datasource = uib_datasource_manager_get_instance()->get_datasource_instance("hass");
		hass_entity_datamodel_context->root_element = hass_entity_datamodel_context->datasource->root_element;
		hass_entity_datamodel_context->dataModelName = "hass_entity";
	}
	return hass_entity_datamodel_context;
}
void cleanup_hass_entity_datamodel() {
	free(hass_entity_datamodel_context);
}