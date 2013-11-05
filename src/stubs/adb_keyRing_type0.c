/*
 * Copyright (C) 2012 Kolibre
 *
 * This file is part of kolibre-daisyonline.
 *
 * Kolibre-daisyonline is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Kolibre-daisyonline is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with kolibre-daisyonline. If not, see <http://www.gnu.org/licenses/>.
 */



        /**
         * adb_keyRing_type0.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_keyRing_type0.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = keyRing_type0
                 * Namespace URI = http://www.daisy.org/ns/daisy-online/
                 * Namespace Prefix = ns3
                 */
           


        struct adb_keyRing_type0
        {
            axis2_char_t *property_TypeName;

            axutil_array_list_t* property_item;

                
                axis2_bool_t is_valid_item;
            
        };


       /************************* Private Function prototypes ********************************/
        
                 axis2_status_t AXIS2_CALL
                 adb_keyRing_type0_set_item_nil_at(
                        adb_keyRing_type0_t* _keyRing_type0, 
                        const axutil_env_t *env, int i);
                

                axis2_status_t AXIS2_CALL
                adb_keyRing_type0_set_item_nil(
                        adb_keyRing_type0_t* _keyRing_type0,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_keyRing_type0_t* AXIS2_CALL
        adb_keyRing_type0_create(
            const axutil_env_t *env)
        {
            adb_keyRing_type0_t *_keyRing_type0 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _keyRing_type0 = (adb_keyRing_type0_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_keyRing_type0_t));

            if(NULL == _keyRing_type0)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_keyRing_type0, 0, sizeof(adb_keyRing_type0_t));

            _keyRing_type0->property_TypeName = axutil_strdup(env, "adb_keyRing_type0");
            _keyRing_type0->property_item  = NULL;
                  _keyRing_type0->is_valid_item  = AXIS2_FALSE;
            

            return _keyRing_type0;
        }

        adb_keyRing_type0_t* AXIS2_CALL
        adb_keyRing_type0_create_with_values(
            const axutil_env_t *env,
                axutil_array_list_t* _item)
        {
            adb_keyRing_type0_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_keyRing_type0_create(env);

            
              status = adb_keyRing_type0_set_item(
                                     adb_obj,
                                     env,
                                     _item);
              if(status == AXIS2_FAILURE) {
                  adb_keyRing_type0_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        axutil_array_list_t* AXIS2_CALL
                adb_keyRing_type0_free_popping_value(
                        adb_keyRing_type0_t* _keyRing_type0,
                        const axutil_env_t *env)
                {
                    axutil_array_list_t* value;

                    
                    
                    value = _keyRing_type0->property_item;

                    _keyRing_type0->property_item = (axutil_array_list_t*)NULL;
                    adb_keyRing_type0_free(_keyRing_type0, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_keyRing_type0_free(
                adb_keyRing_type0_t* _keyRing_type0,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _keyRing_type0,
                env,
                "adb_keyRing_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_keyRing_type0_free_obj(
                adb_keyRing_type0_t* _keyRing_type0,
                const axutil_env_t *env)
        {
            
                int i = 0;
                int count = 0;
                void *element = NULL;
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _keyRing_type0, AXIS2_FAILURE);

            if (_keyRing_type0->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _keyRing_type0->property_TypeName);
            }

            adb_keyRing_type0_reset_item(_keyRing_type0, env);
            

            if(_keyRing_type0)
            {
                AXIS2_FREE(env->allocator, _keyRing_type0);
                _keyRing_type0 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_keyRing_type0_deserialize(
                adb_keyRing_type0_t* _keyRing_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _keyRing_type0,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_keyRing_type0");
            
        }

        axis2_status_t AXIS2_CALL
        adb_keyRing_type0_deserialize_obj(
                adb_keyRing_type0_t* _keyRing_type0,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
               int i = 0;
               axutil_array_list_t *arr_list = NULL;
            
               int sequence_broken = 0;
               axiom_node_t *tmp_node = NULL;
            
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _keyRing_type0, AXIS2_FAILURE);

            
              
              while(parent && axiom_node_get_node_type(parent, env) != AXIOM_ELEMENT)
              {
                  parent = axiom_node_get_next_sibling(parent, env);
              }
              if (NULL == parent)
              {
                /* This should be checked before everything */
                AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, 
                            "Failed in building adb object for keyRing_type0 : "
                            "NULL element can not be passed to deserialize");
                return AXIS2_FAILURE;
              }
              
                      
                      first_node = axiom_node_get_first_child(parent, env);
                      
                    
                    /*
                     * building item array
                     */
                       arr_list = axutil_array_list_create(env, 10);
                   

                     
                     /*
                      * building item element
                      */
                     
                     
                     
                                    element_qname = axutil_qname_create(env, "item", "http://www.daisy.org/ns/daisy-online/", NULL);
                                  
                               
                               for (i = 0, sequence_broken = 0, current_node = first_node; !sequence_broken && current_node != NULL;) 
                                             
                               {
                                  if(axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                  {
                                     current_node =axiom_node_get_next_sibling(current_node, env);
                                     is_early_node_valid = AXIS2_FALSE;
                                     continue;
                                  }
                                  
                                  current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                  qname = axiom_element_get_qname(current_element, env, current_node);

                                  if ( 
                                    (current_node && current_element && (axutil_qname_equals(element_qname, env, qname))))
                                  {
                                  
                                      if( current_node && current_element && (axutil_qname_equals(element_qname, env, qname)))
                                      {
                                          is_early_node_valid = AXIS2_TRUE;
                                      }
                                      
                                     
                                          text_value = axiom_element_get_text(current_element, env, current_node);
                                          if(text_value != NULL)
                                          {
                                              axutil_array_list_add_at(arr_list, env, i, axutil_strdup(env, text_value));
                                          }
                                          
                                          else
                                          {
                                              /*
                                               * axis2_qname_t *qname = NULL;
                                               * axiom_attribute_t *the_attri = NULL;
                                               * 
                                               * qname = axutil_qname_create(env, "nil", "http://www.w3.org/2001/XMLSchema-instance", "xsi");
                                               * the_attri = axiom_element_get_attribute(current_element, env, qname);
                                               */
                                           
                                              /* currently thereis a bug in the axiom_element_get_attribute, so we have to go to this bad method */
                                             
                                              axiom_attribute_t *the_attri = NULL;
                                              axis2_char_t *attrib_text = NULL;
                                              axutil_hash_t *attribute_hash = NULL;
                                             
                                              attribute_hash = axiom_element_get_all_attributes(current_element, env);
                                             
                                              attrib_text = NULL;
                                              if(attribute_hash)
                                              {
                                                   axutil_hash_index_t *hi;
                                                   void *val;
                                                   const void *key;
                                             
                                                   for (hi = axutil_hash_first(attribute_hash, env); hi; hi = axutil_hash_next(env, hi)) 
                                                   {
                                                       axutil_hash_this(hi, &key, NULL, &val);
                                                       
                                                       if(strstr((axis2_char_t*)key, "nil|http://www.w3.org/2001/XMLSchema-instance"))
                                                       {
                                                           the_attri = (axiom_attribute_t*)val;
                                                           break;
                                                       }
                                                   }
                                              }
                                             
                                              if(the_attri)
                                              {
                                                  attrib_text = axiom_attribute_get_value(the_attri, env);
                                              }
                                              else
                                              {
                                                  /* this is hoping that attribute is stored in "http://www.w3.org/2001/XMLSchema-instance", this happnes when name is in default namespace */
                                                  attrib_text = axiom_element_get_attribute_value_by_name(current_element, env, "nil");
                                              }
                                             
                                              if(attrib_text && 0 == axutil_strcmp(attrib_text, "1"))
                                              {
                                                  AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "NULL value is set to a non nillable element item");
                                                  status = AXIS2_FAILURE;
                                              }
                                              else
                                              {
                                                  /* after all, we found this is a empty string */
                                                  axutil_array_list_add_at(arr_list, env, i, axutil_strdup(env, ""));
                                              }
                                          }
                                          
                                     if(AXIS2_FAILURE ==  status)
                                     {
                                         AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for item ");
                                         if(element_qname)
                                         {
                                            axutil_qname_free(element_qname, env);
                                         }
                                         if(arr_list)
                                         {
                                            axutil_array_list_free(arr_list, env);
                                         }
                                         return AXIS2_FAILURE;
                                     }

                                     i ++;
                                    current_node = axiom_node_get_next_sibling(current_node, env);
                                  }
                                  else
                                  {
                                      is_early_node_valid = AXIS2_FALSE;
                                      sequence_broken = 1;
                                  }
                                  
                               }

                               
                                   if (i < 0)
                                   {
                                     /* found element out of order */
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "item (@minOccurs = '0') only have %d elements", i);
                                     if(element_qname)
                                     {
                                        axutil_qname_free(element_qname, env);
                                     }
                                     if(arr_list)
                                     {
                                        axutil_array_list_free(arr_list, env);
                                     }
                                     return AXIS2_FAILURE;
                                   }
                               

                               if(0 == axutil_array_list_size(arr_list,env))
                               {
                                    axutil_array_list_free(arr_list, env);
                               }
                               else
                               {
                                    status = adb_keyRing_type0_set_item(_keyRing_type0, env,
                                                                   arr_list);
                               }

                             
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_keyRing_type0_is_particle()
          {
            
                 return AXIS2_FALSE;
              
          }


          void AXIS2_CALL
          adb_keyRing_type0_declare_parent_namespaces(
                    adb_keyRing_type0_t* _keyRing_type0,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_keyRing_type0_serialize(
                adb_keyRing_type0_t* _keyRing_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_keyRing_type0 == NULL)
            {
                return adb_keyRing_type0_serialize_obj(
                    _keyRing_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _keyRing_type0, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_keyRing_type0");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_keyRing_type0_serialize_obj(
                adb_keyRing_type0_t* _keyRing_type0,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
             axis2_char_t *string_to_stream;
            
         
         axiom_node_t* current_node = NULL;
         int tag_closed = 0;
         axis2_char_t* xsi_prefix = NULL;
         axiom_namespace_t* xsi_ns = NULL;
         axiom_attribute_t* xsi_type_attri = NULL;
         
         axis2_char_t* type_attrib = NULL;
         
                axiom_namespace_t *ns1 = NULL;

                axis2_char_t *qname_uri = NULL;
                axis2_char_t *qname_prefix = NULL;
                axis2_char_t *p_prefix = NULL;
                axis2_bool_t ns_already_defined;
            
               int i = 0;
               int count = 0;
               void *element = NULL;
             
                    axis2_char_t *text_value_1;
                    axis2_char_t *text_value_1_temp;
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _keyRing_type0, NULL);
            
            
                    current_node = parent;
                    data_source = (axiom_data_source_t *)axiom_node_get_data_element(current_node, env);
                    if (!data_source)
                        return NULL;
                    stream = axiom_data_source_get_stream(data_source, env); /* assume parent is of type data source */
                    if (!stream)
                        return NULL;
                  
            if(!parent_tag_closed)
            {
            
              string_to_stream = ">"; 
              axutil_stream_write(stream, env, string_to_stream, axutil_strlen(string_to_stream));
              tag_closed = 1;
            
            }
        
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/ns/daisy-online/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/ns/daisy-online/",
                                            p_prefix));
                       }
                      

                   if (!_keyRing_type0->is_valid_item)
                   {
                      
                           /* no need to complain for minoccurs=0 element */
                            
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("item"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("item")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     /*
                      * Parsing item array
                      */
                     if (_keyRing_type0->property_item != NULL)
                     {
                        
                            sprintf(start_input_str, "<%s%sitem>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                         start_input_str_len = axutil_strlen(start_input_str);

                         sprintf(end_input_str, "</%s%sitem>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                         end_input_str_len = axutil_strlen(end_input_str);

                         count = axutil_array_list_size(_keyRing_type0->property_item, env);
                         for(i = 0; i < count; i ++)
                         {
                            element = axutil_array_list_get(_keyRing_type0->property_item, env, i);

                            if(NULL == element) 
                            {
                                continue;
                            }
                    
                     
                     /*
                      * parsing item element
                      */

                    
                    
                           text_value_1 = (axis2_char_t*)element;
                           
                           axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                           
                            
                           text_value_1_temp = axutil_xml_quote_string(env, text_value_1, AXIS2_TRUE);
                           if (text_value_1_temp)
                           {
                               axutil_stream_write(stream, env, text_value_1_temp, axutil_strlen(text_value_1_temp));
                               AXIS2_FREE(env->allocator, text_value_1_temp);
                           }
                           else
                           {
                               axutil_stream_write(stream, env, text_value_1, axutil_strlen(text_value_1));
                           }
                           
                           axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                           
                         }
                     }
                   
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 

            return parent;
        }


        

            /**
             * Getter for item by  Property Number 1
             */
            axutil_array_list_t* AXIS2_CALL
            adb_keyRing_type0_get_property1(
                adb_keyRing_type0_t* _keyRing_type0,
                const axutil_env_t *env)
            {
                return adb_keyRing_type0_get_item(_keyRing_type0,
                                             env);
            }

            /**
             * getter for item.
             */
            axutil_array_list_t* AXIS2_CALL
            adb_keyRing_type0_get_item(
                    adb_keyRing_type0_t* _keyRing_type0,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _keyRing_type0, NULL);
                  

                return _keyRing_type0->property_item;
             }

            /**
             * setter for item
             */
            axis2_status_t AXIS2_CALL
            adb_keyRing_type0_set_item(
                    adb_keyRing_type0_t* _keyRing_type0,
                    const axutil_env_t *env,
                    axutil_array_list_t*  arg_item)
             {
                
                 int size = 0;
                 int i = 0;
                 axis2_bool_t non_nil_exists = AXIS2_FALSE;
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _keyRing_type0, AXIS2_FAILURE);
                
                if(_keyRing_type0->is_valid_item &&
                        arg_item == _keyRing_type0->property_item)
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                 size = axutil_array_list_size(arg_item, env);
                 
                 if (size < 0)
                 {
                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "item has less than minOccurs(0)");
                     return AXIS2_FAILURE;
                 }
                 for(i = 0; i < size; i ++ )
                 {
                     if(NULL != axutil_array_list_get(arg_item, env, i))
                     {
                         non_nil_exists = AXIS2_TRUE;
                         break;
                     }
                 }

                 adb_keyRing_type0_reset_item(_keyRing_type0, env);

                
                if(NULL == arg_item)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _keyRing_type0->property_item = arg_item;
                        if(non_nil_exists)
                        {
                            _keyRing_type0->is_valid_item = AXIS2_TRUE;
                        }
                        
                    
                return AXIS2_SUCCESS;
             }

            
            /**
             * Get ith element of item.
             */
            axis2_char_t* AXIS2_CALL
            adb_keyRing_type0_get_item_at(
                    adb_keyRing_type0_t* _keyRing_type0,
                    const axutil_env_t *env, int i)
            {
                axis2_char_t* ret_val;

                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _keyRing_type0, NULL);
                  

                if(_keyRing_type0->property_item == NULL)
                {
                    return (axis2_char_t*)0;
                }
                ret_val = (axis2_char_t*)axutil_array_list_get(_keyRing_type0->property_item, env, i);
                
                    return ret_val;
                  
            }

            /**
             * Set the ith element of item.
             */
            axis2_status_t AXIS2_CALL
            adb_keyRing_type0_set_item_at(
                    adb_keyRing_type0_t* _keyRing_type0,
                    const axutil_env_t *env, int i,
                    const axis2_char_t* arg_item)
            {
                void *element = NULL;
                int size = 0;
                int j;
                int non_nil_count;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _keyRing_type0, AXIS2_FAILURE);
                
                if( _keyRing_type0->is_valid_item &&
                    _keyRing_type0->property_item &&
                
                    arg_item == (axis2_char_t*)axutil_array_list_get(_keyRing_type0->property_item, env, i))
                  
                {
                    
                    return AXIS2_SUCCESS; 
                }

                
                    if(NULL != arg_item)
                    {
                        non_nil_exists = AXIS2_TRUE;
                    }
                    else {
                        if(_keyRing_type0->property_item != NULL)
                        {
                            size = axutil_array_list_size(_keyRing_type0->property_item, env);
                            for(j = 0, non_nil_count = 0; j < size; j ++ )
                            {
                                if(i == j) continue; 
                                if(NULL != axutil_array_list_get(_keyRing_type0->property_item, env, i))
                                {
                                    non_nil_count ++;
                                    non_nil_exists = AXIS2_TRUE;
                                    if(non_nil_count >= 0)
                                    {
                                        break;
                                    }
                                }
                            }

                        
                        }
                    }
                  

                if(_keyRing_type0->property_item == NULL)
                {
                    _keyRing_type0->property_item = axutil_array_list_create(env, 10);
                }
                
                /* check whether there already exist an element */
                element = axutil_array_list_get(_keyRing_type0->property_item, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _keyRing_type0->is_valid_item = AXIS2_FALSE;
                        axutil_array_list_set(_keyRing_type0->property_item , env, i, NULL);
                        
                        return AXIS2_SUCCESS;
                    }
                
                   axutil_array_list_set(_keyRing_type0->property_item , env, i, axutil_strdup(env, arg_item));
                  _keyRing_type0->is_valid_item = AXIS2_TRUE;
                
                return AXIS2_SUCCESS;
            }

            /**
             * Add to item.
             */
            axis2_status_t AXIS2_CALL
            adb_keyRing_type0_add_item(
                    adb_keyRing_type0_t* _keyRing_type0,
                    const axutil_env_t *env,
                    const axis2_char_t* arg_item)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _keyRing_type0, AXIS2_FAILURE);

                
                    if(NULL == arg_item)
                    {
                      
                           return AXIS2_SUCCESS; 
                        
                    }
                  

                if(_keyRing_type0->property_item == NULL)
                {
                    _keyRing_type0->property_item = axutil_array_list_create(env, 10);
                }
                if(_keyRing_type0->property_item == NULL)
                {
                    AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Failed in allocatting memory for item");
                    return AXIS2_FAILURE;
                    
                }
                
                   axutil_array_list_add(_keyRing_type0->property_item , env, axutil_strdup(env, arg_item));
                  _keyRing_type0->is_valid_item = AXIS2_TRUE;
                return AXIS2_SUCCESS;
             }

            /**
             * Get the size of the item array.
             */
            int AXIS2_CALL
            adb_keyRing_type0_sizeof_item(
                    adb_keyRing_type0_t* _keyRing_type0,
                    const axutil_env_t *env)
            {
                AXIS2_ENV_CHECK(env, -1);
                AXIS2_PARAM_CHECK(env->error, _keyRing_type0, -1);
                if(_keyRing_type0->property_item == NULL)
                {
                    return 0;
                }
                return axutil_array_list_size(_keyRing_type0->property_item, env);
            }

            /**
             * remove the ith element, same as set_nil_at.
             */
            axis2_status_t AXIS2_CALL
            adb_keyRing_type0_remove_item_at(
                    adb_keyRing_type0_t* _keyRing_type0,
                    const axutil_env_t *env, int i)
            {
                return adb_keyRing_type0_set_item_nil_at(_keyRing_type0, env, i);
            }

            

           /**
            * resetter for item
            */
           axis2_status_t AXIS2_CALL
           adb_keyRing_type0_reset_item(
                   adb_keyRing_type0_t* _keyRing_type0,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _keyRing_type0, AXIS2_FAILURE);
               

               
                  if (_keyRing_type0->property_item != NULL)
                  {
                      count = axutil_array_list_size(_keyRing_type0->property_item, env);
                      for(i = 0; i < count; i ++)
                      {
                         element = axutil_array_list_get(_keyRing_type0->property_item, env, i);
                
            
                
                if(element != NULL)
                {
                   
                   
                        AXIS2_FREE(env-> allocator, (axis2_char_t*)element);
                     element = NULL;
                }
            
                
                
                
                      }
                      axutil_array_list_free(_keyRing_type0->property_item, env);
                  }
                _keyRing_type0->is_valid_item = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether item is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_keyRing_type0_is_item_nil(
                   adb_keyRing_type0_t* _keyRing_type0,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _keyRing_type0, AXIS2_TRUE);
               
               return !_keyRing_type0->is_valid_item;
           }

           /**
            * Set item to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_keyRing_type0_set_item_nil(
                   adb_keyRing_type0_t* _keyRing_type0,
                   const axutil_env_t *env)
           {
               return adb_keyRing_type0_reset_item(_keyRing_type0, env);
           }

           
           /**
            * Check whether item is nill at i
            */
           axis2_bool_t AXIS2_CALL
           adb_keyRing_type0_is_item_nil_at(
                   adb_keyRing_type0_t* _keyRing_type0,
                   const axutil_env_t *env, int i)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _keyRing_type0, AXIS2_TRUE);
               
               return (_keyRing_type0->is_valid_item == AXIS2_FALSE ||
                        NULL == _keyRing_type0->property_item || 
                        NULL == axutil_array_list_get(_keyRing_type0->property_item, env, i));
           }

           /**
            * Set item to nill at i
            */
           axis2_status_t AXIS2_CALL
           adb_keyRing_type0_set_item_nil_at(
                   adb_keyRing_type0_t* _keyRing_type0,
                   const axutil_env_t *env, int i)
           {
                void *element = NULL;
                int size = 0;
                int j;
                axis2_bool_t non_nil_exists = AXIS2_FALSE;

                int k = 0;

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _keyRing_type0, AXIS2_FAILURE);

                if(_keyRing_type0->property_item == NULL ||
                            _keyRing_type0->is_valid_item == AXIS2_FALSE)
                {
                    
                    non_nil_exists = AXIS2_FALSE;
                }
                else
                {
                    size = axutil_array_list_size(_keyRing_type0->property_item, env);
                    for(j = 0, k = 0; j < size; j ++ )
                    {
                        if(i == j) continue; 
                        if(NULL != axutil_array_list_get(_keyRing_type0->property_item, env, i))
                        {
                            k ++;
                            non_nil_exists = AXIS2_TRUE;
                            if( k >= 0)
                            {
                                break;
                            }
                        }
                    }
                }
                

                if( k < 0)
                {
                       AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Size of the array of item is beinng set to be smaller than the specificed number of minOccurs(0)");
                       return AXIS2_FAILURE;
                }
 
                if(_keyRing_type0->property_item == NULL)
                {
                    _keyRing_type0->is_valid_item = AXIS2_FALSE;
                    
                    return AXIS2_SUCCESS;
                }

                /* check whether there already exist an element */
                element = axutil_array_list_get(_keyRing_type0->property_item, env, i);
                if(NULL != element)
                {
                  
                  
                  
                       /* This is an unknown type or a primitive. Please free this manually*/
                     
                }

                
                    if(!non_nil_exists)
                    {
                        
                        _keyRing_type0->is_valid_item = AXIS2_FALSE;
                        axutil_array_list_set(_keyRing_type0->property_item , env, i, NULL);
                        return AXIS2_SUCCESS;
                    }
                

                
                axutil_array_list_set(_keyRing_type0->property_item , env, i, NULL);
                
                return AXIS2_SUCCESS;

           }

           

