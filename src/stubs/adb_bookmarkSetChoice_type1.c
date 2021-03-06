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
         * adb_bookmarkSetChoice_type1.c
         *
         * This file was auto-generated from WSDL
         * by the Apache Axis2/C version: SNAPSHOT  Built on : Mar 10, 2008 (08:35:52 GMT+00:00)
         */

        #include "adb_bookmarkSetChoice_type1.h"
        
                /*
                 * This type was generated from the piece of schema that had
                 * name = bookmarkSetChoice_type1
                 * Namespace URI = http://www.daisy.org/z3986/2005/bookmark/
                 * Namespace Prefix = ns4
                 */
           


        struct adb_bookmarkSetChoice_type1
        {
            axis2_char_t *property_TypeName;

            adb_bookmark_type0_t* property_bookmark;

                
                axis2_bool_t is_valid_bookmark;
            adb_hilite_type0_t* property_hilite;

                
                axis2_bool_t is_valid_hilite;
            
                axis2_char_t *current_choice;
            
        };


       /************************* Private Function prototypes ********************************/
        

                axis2_status_t AXIS2_CALL
                adb_bookmarkSetChoice_type1_set_bookmark_nil(
                        adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                        const axutil_env_t *env);
            

                axis2_status_t AXIS2_CALL
                adb_bookmarkSetChoice_type1_set_hilite_nil(
                        adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                        const axutil_env_t *env);
            


       /************************* Function Implmentations ********************************/
        adb_bookmarkSetChoice_type1_t* AXIS2_CALL
        adb_bookmarkSetChoice_type1_create(
            const axutil_env_t *env)
        {
            adb_bookmarkSetChoice_type1_t *_bookmarkSetChoice_type1 = NULL;
            
            AXIS2_ENV_CHECK(env, NULL);

            _bookmarkSetChoice_type1 = (adb_bookmarkSetChoice_type1_t *) AXIS2_MALLOC(env->
                allocator, sizeof(adb_bookmarkSetChoice_type1_t));

            if(NULL == _bookmarkSetChoice_type1)
            {
                AXIS2_ERROR_SET(env->error, AXIS2_ERROR_NO_MEMORY, AXIS2_FAILURE);
                return NULL;
            }

            memset(_bookmarkSetChoice_type1, 0, sizeof(adb_bookmarkSetChoice_type1_t));

            _bookmarkSetChoice_type1->property_TypeName = axutil_strdup(env, "adb_bookmarkSetChoice_type1");
            _bookmarkSetChoice_type1->property_bookmark  = NULL;
                  _bookmarkSetChoice_type1->is_valid_bookmark  = AXIS2_FALSE;
            _bookmarkSetChoice_type1->property_hilite  = NULL;
                  _bookmarkSetChoice_type1->is_valid_hilite  = AXIS2_FALSE;
            _bookmarkSetChoice_type1->current_choice = "";
            

            return _bookmarkSetChoice_type1;
        }

        adb_bookmarkSetChoice_type1_t* AXIS2_CALL
        adb_bookmarkSetChoice_type1_create_with_values(
            const axutil_env_t *env,
                adb_bookmark_type0_t* _bookmark,
                adb_hilite_type0_t* _hilite)
        {
            adb_bookmarkSetChoice_type1_t* adb_obj = NULL;
            axis2_status_t status = AXIS2_SUCCESS;

            adb_obj = adb_bookmarkSetChoice_type1_create(env);

            
              status = adb_bookmarkSetChoice_type1_set_bookmark(
                                     adb_obj,
                                     env,
                                     _bookmark);
              if(status == AXIS2_FAILURE) {
                  adb_bookmarkSetChoice_type1_free (adb_obj, env);
                  return NULL;
              }
            
              status = adb_bookmarkSetChoice_type1_set_hilite(
                                     adb_obj,
                                     env,
                                     _hilite);
              if(status == AXIS2_FAILURE) {
                  adb_bookmarkSetChoice_type1_free (adb_obj, env);
                  return NULL;
              }
            

            return adb_obj;
        }
      
        adb_bookmark_type0_t* AXIS2_CALL
                adb_bookmarkSetChoice_type1_free_popping_value(
                        adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                        const axutil_env_t *env)
                {
                    adb_bookmark_type0_t* value;

                    
                    
                    value = _bookmarkSetChoice_type1->property_bookmark;

                    _bookmarkSetChoice_type1->property_bookmark = (adb_bookmark_type0_t*)NULL;
                    adb_bookmarkSetChoice_type1_free(_bookmarkSetChoice_type1, env);

                    return value;
                }
            

        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type1_free(
                adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                const axutil_env_t *env)
        {
            
            
            return axis2_extension_mapper_free(
                (adb_stubtype_t*) _bookmarkSetChoice_type1,
                env,
                "adb_bookmarkSetChoice_type1");
            
        }

        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type1_free_obj(
                adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                const axutil_env_t *env)
        {
            

            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, AXIS2_FAILURE);

            if (_bookmarkSetChoice_type1->property_TypeName != NULL)
            {
              AXIS2_FREE(env->allocator, _bookmarkSetChoice_type1->property_TypeName);
            }

            adb_bookmarkSetChoice_type1_reset_bookmark(_bookmarkSetChoice_type1, env);
            adb_bookmarkSetChoice_type1_reset_hilite(_bookmarkSetChoice_type1, env);
            

            if(_bookmarkSetChoice_type1)
            {
                AXIS2_FREE(env->allocator, _bookmarkSetChoice_type1);
                _bookmarkSetChoice_type1 = NULL;
            }

            return AXIS2_SUCCESS;
        }


        

        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type1_deserialize(
                adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
            
            
            return axis2_extension_mapper_deserialize(
                (adb_stubtype_t*) _bookmarkSetChoice_type1,
                env,
                dp_parent,
                dp_is_early_node_valid,
                dont_care_minoccurs,
                "adb_bookmarkSetChoice_type1");
            
        }

        axis2_status_t AXIS2_CALL
        adb_bookmarkSetChoice_type1_deserialize_obj(
                adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                const axutil_env_t *env,
                axiom_node_t **dp_parent,
                axis2_bool_t *dp_is_early_node_valid,
                axis2_bool_t dont_care_minoccurs)
        {
          axiom_node_t *parent = *dp_parent;
          
          axis2_status_t status = AXIS2_SUCCESS;
          
              void *element = NULL;
           
             const axis2_char_t* text_value = NULL;
             axutil_qname_t *qname = NULL;
          
            axutil_qname_t *element_qname = NULL; 
            
               axiom_node_t *first_node = NULL;
               axis2_bool_t is_early_node_valid = AXIS2_TRUE;
               axiom_node_t *current_node = NULL;
               axiom_element_t *current_element = NULL;
            
            AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
            AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, AXIS2_FAILURE);

            
                         first_node = parent;
                    

                     
                     /*
                      * building bookmark element
                      */
                     
                     
                     
                                   current_node = first_node;
                                   is_early_node_valid = AXIS2_FALSE;
                                   
                                   
                                    while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                    {
                                        current_node = axiom_node_get_next_sibling(current_node, env);
                                    }
                                    if(current_node != NULL)
                                    {
                                        current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                        qname = axiom_element_get_qname(current_element, env, current_node);
                                    }
                                   
                                 element_qname = axutil_qname_create(env, "bookmark", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (adb_bookmark_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_bookmark_type0");

                                      status =  adb_bookmark_type0_deserialize((adb_bookmark_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element bookmark");
                                      }
                                      else
                                      {
                                          status = adb_bookmarkSetChoice_type1_set_bookmark(_bookmarkSetChoice_type1, env,
                                                                   (adb_bookmark_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for bookmark ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 

                     
                     /*
                      * building hilite element
                      */
                     
                     
                     
                                    /*
                                     * because elements are ordered this works fine
                                     */
                                  
                                   
                                   if(current_node != NULL && is_early_node_valid)
                                   {
                                       current_node = axiom_node_get_next_sibling(current_node, env);
                                       
                                       
                                        while(current_node && axiom_node_get_node_type(current_node, env) != AXIOM_ELEMENT)
                                        {
                                            current_node = axiom_node_get_next_sibling(current_node, env);
                                        }
                                        if(current_node != NULL)
                                        {
                                            current_element = (axiom_element_t *)axiom_node_get_data_element(current_node, env);
                                            qname = axiom_element_get_qname(current_element, env, current_node);
                                        }
                                       
                                   }
                                   is_early_node_valid = AXIS2_FALSE;
                                 
                                 element_qname = axutil_qname_create(env, "hilite", "http://www.daisy.org/z3986/2005/bookmark/", NULL);
                                 

                           if (adb_hilite_type0_is_particle() ||  
                                (current_node   && current_element && (axutil_qname_equals(element_qname, env, qname))))
                           {
                              if( current_node   && current_element && (axutil_qname_equals(element_qname, env, qname)))
                              {
                                is_early_node_valid = AXIS2_TRUE;
                              }
                              
                                 
                                      element = (void*)axis2_extension_mapper_create_from_node(env, &current_node, "adb_hilite_type0");

                                      status =  adb_hilite_type0_deserialize((adb_hilite_type0_t*)element,
                                                                            env, &current_node, &is_early_node_valid, AXIS2_TRUE);
                                      if(AXIS2_FAILURE == status)
                                      {
                                          AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in building adb object for element hilite");
                                      }
                                      else
                                      {
                                          status = adb_bookmarkSetChoice_type1_set_hilite(_bookmarkSetChoice_type1, env,
                                                                   (adb_hilite_type0_t*)element);
                                      }
                                    
                                 if(AXIS2_FAILURE ==  status)
                                 {
                                     AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "failed in setting the value for hilite ");
                                     if(element_qname)
                                     {
                                         axutil_qname_free(element_qname, env);
                                     }
                                     return AXIS2_FAILURE;
                                 }
                              }
                           
                  if(element_qname)
                  {
                     axutil_qname_free(element_qname, env);
                     element_qname = NULL;
                  }
                 
                *dp_parent = current_node;
                *dp_is_early_node_valid = is_early_node_valid;
            
          return status;
       }

          axis2_bool_t AXIS2_CALL
          adb_bookmarkSetChoice_type1_is_particle()
          {
            
                 return AXIS2_TRUE;
              
          }


          void AXIS2_CALL
          adb_bookmarkSetChoice_type1_declare_parent_namespaces(
                    adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                    const axutil_env_t *env, axiom_element_t *parent_element,
                    axutil_hash_t *namespaces, int *next_ns_index)
          {
            
                  /* Here this is an empty function, Nothing to declare */
                 
          }

        
        
        axiom_node_t* AXIS2_CALL
        adb_bookmarkSetChoice_type1_serialize(
                adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                const axutil_env_t *env, axiom_node_t *parent, axiom_element_t *parent_element, int parent_tag_closed, axutil_hash_t *namespaces, int *next_ns_index)
        {
            
            
            if (_bookmarkSetChoice_type1 == NULL)
            {
                return adb_bookmarkSetChoice_type1_serialize_obj(
                    _bookmarkSetChoice_type1, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index);
            }
            else
            {
                return axis2_extension_mapper_serialize(
                    (adb_stubtype_t*) _bookmarkSetChoice_type1, env, parent, parent_element, parent_tag_closed, namespaces, next_ns_index, "adb_bookmarkSetChoice_type1");
            }
            
        }

        axiom_node_t* AXIS2_CALL
        adb_bookmarkSetChoice_type1_serialize_obj(
                adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
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
            
                    axis2_char_t text_value_1[ADB_DEFAULT_DIGIT_LIMIT];
                    
                    axis2_char_t text_value_2[ADB_DEFAULT_DIGIT_LIMIT];
                    
               axis2_char_t *start_input_str = NULL;
               axis2_char_t *end_input_str = NULL;
               unsigned int start_input_str_len = 0;
               unsigned int end_input_str_len = 0;
            
            
               axiom_data_source_t *data_source = NULL;
               axutil_stream_t *stream = NULL;

            

            AXIS2_ENV_CHECK(env, NULL);
            AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, NULL);
            
            
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
        
                if(0 == axutil_strcmp(_bookmarkSetChoice_type1->current_choice, "http://www.daisy.org/z3986/2005/bookmark/:bookmark"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_bookmarkSetChoice_type1->is_valid_bookmark)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property bookmark");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("bookmark"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("bookmark")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing bookmark element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%sbookmark",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%sbookmark>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_bookmark_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_bookmark_type0_serialize(_bookmarkSetChoice_type1->property_bookmark, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_bookmark_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_bookmark_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 
                if(0 == axutil_strcmp(_bookmarkSetChoice_type1->current_choice, "http://www.daisy.org/z3986/2005/bookmark/:hilite"))
                {
                
                       if(!(p_prefix = (axis2_char_t*)axutil_hash_get(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING)))
                       {
                           p_prefix = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof (axis2_char_t) * ADB_DEFAULT_NAMESPACE_PREFIX_LIMIT);
                           sprintf(p_prefix, "n%d", (*next_ns_index)++);
                           axutil_hash_set(namespaces, "http://www.daisy.org/z3986/2005/bookmark/", AXIS2_HASH_KEY_STRING, p_prefix);
                           
                           axiom_element_declare_namespace_assume_param_ownership(parent_element, env, axiom_namespace_create (env,
                                            "http://www.daisy.org/z3986/2005/bookmark/",
                                            p_prefix));
                       }
                      

                   if (!_bookmarkSetChoice_type1->is_valid_hilite)
                   {
                      
                            
                            AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "Nil value found in non-nillable property hilite");
                            return NULL;
                          
                   }
                   else
                   {
                     start_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (4 + axutil_strlen(p_prefix) + 
                                  axutil_strlen("hilite"))); 
                                 
                                 /* axutil_strlen("<:>") + 1 = 4 */
                     end_input_str = (axis2_char_t*)AXIS2_MALLOC(env->allocator, sizeof(axis2_char_t) *
                                 (5 + axutil_strlen(p_prefix) + axutil_strlen("hilite")));
                                  /* axutil_strlen("</:>") + 1 = 5 */
                                  
                     

                   
                   
                     
                     /*
                      * parsing hilite element
                      */

                    
                    
                            sprintf(start_input_str, "<%s%shilite",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":""); 
                            
                        start_input_str_len = axutil_strlen(start_input_str);
                        sprintf(end_input_str, "</%s%shilite>",
                                 p_prefix?p_prefix:"",
                                 (p_prefix && axutil_strcmp(p_prefix, ""))?":":"");
                        end_input_str_len = axutil_strlen(end_input_str);
                     
                            if(!adb_hilite_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, start_input_str, start_input_str_len);
                            }
                            adb_hilite_type0_serialize(_bookmarkSetChoice_type1->property_hilite, 
                                                                                 env, current_node, parent_element,
                                                                                 adb_hilite_type0_is_particle() || AXIS2_FALSE, namespaces, next_ns_index);
                            
                            if(!adb_hilite_type0_is_particle())
                            {
                                axutil_stream_write(stream, env, end_input_str, end_input_str_len);
                            }
                            
                     
                     AXIS2_FREE(env->allocator,start_input_str);
                     AXIS2_FREE(env->allocator,end_input_str);
                 } 

                 
                 }
                 

            return parent;
        }


        

            /**
             * Getter for bookmark by  Property Number 1
             */
            adb_bookmark_type0_t* AXIS2_CALL
            adb_bookmarkSetChoice_type1_get_property1(
                adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                const axutil_env_t *env)
            {
                return adb_bookmarkSetChoice_type1_get_bookmark(_bookmarkSetChoice_type1,
                                             env);
            }

            /**
             * getter for bookmark.
             */
            adb_bookmark_type0_t* AXIS2_CALL
            adb_bookmarkSetChoice_type1_get_bookmark(
                    adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, NULL);
                  

                return _bookmarkSetChoice_type1->property_bookmark;
             }

            /**
             * setter for bookmark
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkSetChoice_type1_set_bookmark(
                    adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                    const axutil_env_t *env,
                    adb_bookmark_type0_t*  arg_bookmark)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, AXIS2_FAILURE);
                
                if(_bookmarkSetChoice_type1->is_valid_bookmark &&
                        arg_bookmark == _bookmarkSetChoice_type1->property_bookmark)
                {
                    _bookmarkSetChoice_type1->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:bookmark";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_bookmark)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "bookmark is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmarkSetChoice_type1_reset_bookmark(_bookmarkSetChoice_type1, env);

                
                if(NULL == arg_bookmark)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmarkSetChoice_type1->property_bookmark = arg_bookmark;
                        _bookmarkSetChoice_type1->is_valid_bookmark = AXIS2_TRUE;
                    _bookmarkSetChoice_type1->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:bookmark";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for bookmark
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSetChoice_type1_reset_bookmark(
                   adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, AXIS2_FAILURE);
               

               
            
                
                if(_bookmarkSetChoice_type1->property_bookmark != NULL)
                {
                   
                   adb_bookmark_type0_free(_bookmarkSetChoice_type1->property_bookmark, env);
                     _bookmarkSetChoice_type1->property_bookmark = NULL;
                }
            
                
                
                _bookmarkSetChoice_type1->is_valid_bookmark = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether bookmark is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkSetChoice_type1_is_bookmark_nil(
                   adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, AXIS2_TRUE);
               
               return !_bookmarkSetChoice_type1->is_valid_bookmark;
           }

           /**
            * Set bookmark to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSetChoice_type1_set_bookmark_nil(
                   adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                   const axutil_env_t *env)
           {
               return adb_bookmarkSetChoice_type1_reset_bookmark(_bookmarkSetChoice_type1, env);
           }

           

            /**
             * Getter for hilite by  Property Number 2
             */
            adb_hilite_type0_t* AXIS2_CALL
            adb_bookmarkSetChoice_type1_get_property2(
                adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                const axutil_env_t *env)
            {
                return adb_bookmarkSetChoice_type1_get_hilite(_bookmarkSetChoice_type1,
                                             env);
            }

            /**
             * getter for hilite.
             */
            adb_hilite_type0_t* AXIS2_CALL
            adb_bookmarkSetChoice_type1_get_hilite(
                    adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                    const axutil_env_t *env)
             {
                
                    AXIS2_ENV_CHECK(env, NULL);
                    AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, NULL);
                  

                return _bookmarkSetChoice_type1->property_hilite;
             }

            /**
             * setter for hilite
             */
            axis2_status_t AXIS2_CALL
            adb_bookmarkSetChoice_type1_set_hilite(
                    adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                    const axutil_env_t *env,
                    adb_hilite_type0_t*  arg_hilite)
             {
                

                AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
                AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, AXIS2_FAILURE);
                
                if(_bookmarkSetChoice_type1->is_valid_hilite &&
                        arg_hilite == _bookmarkSetChoice_type1->property_hilite)
                {
                    _bookmarkSetChoice_type1->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:hilite";
                    
                    return AXIS2_SUCCESS; 
                }

                
                  if(NULL == arg_hilite)
                  {
                      AXIS2_LOG_ERROR(env->log, AXIS2_LOG_SI, "hilite is being set to NULL, but it is not a nullable element");
                      return AXIS2_FAILURE;
                  }
                adb_bookmarkSetChoice_type1_reset_hilite(_bookmarkSetChoice_type1, env);

                
                if(NULL == arg_hilite)
                {
                    /* We are already done */
                    return AXIS2_SUCCESS;
                }
                _bookmarkSetChoice_type1->property_hilite = arg_hilite;
                        _bookmarkSetChoice_type1->is_valid_hilite = AXIS2_TRUE;
                    _bookmarkSetChoice_type1->current_choice = "http://www.daisy.org/z3986/2005/bookmark/:hilite";
                
                return AXIS2_SUCCESS;
             }

             

           /**
            * resetter for hilite
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSetChoice_type1_reset_hilite(
                   adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                   const axutil_env_t *env)
           {
               int i = 0;
               int count = 0;
               void *element = NULL;

               AXIS2_ENV_CHECK(env, AXIS2_FAILURE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, AXIS2_FAILURE);
               

               
            
                
                if(_bookmarkSetChoice_type1->property_hilite != NULL)
                {
                   
                   adb_hilite_type0_free(_bookmarkSetChoice_type1->property_hilite, env);
                     _bookmarkSetChoice_type1->property_hilite = NULL;
                }
            
                
                
                _bookmarkSetChoice_type1->is_valid_hilite = AXIS2_FALSE; 
               return AXIS2_SUCCESS;
           }

           /**
            * Check whether hilite is nill
            */
           axis2_bool_t AXIS2_CALL
           adb_bookmarkSetChoice_type1_is_hilite_nil(
                   adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                   const axutil_env_t *env)
           {
               AXIS2_ENV_CHECK(env, AXIS2_TRUE);
               AXIS2_PARAM_CHECK(env->error, _bookmarkSetChoice_type1, AXIS2_TRUE);
               
               return !_bookmarkSetChoice_type1->is_valid_hilite;
           }

           /**
            * Set hilite to nill (currently the same as reset)
            */
           axis2_status_t AXIS2_CALL
           adb_bookmarkSetChoice_type1_set_hilite_nil(
                   adb_bookmarkSetChoice_type1_t* _bookmarkSetChoice_type1,
                   const axutil_env_t *env)
           {
               return adb_bookmarkSetChoice_type1_reset_hilite(_bookmarkSetChoice_type1, env);
           }

           

