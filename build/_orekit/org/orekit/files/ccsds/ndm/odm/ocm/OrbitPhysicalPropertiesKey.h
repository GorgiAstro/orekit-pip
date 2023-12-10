#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitPhysicalPropertiesKey_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitPhysicalPropertiesKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitPhysicalProperties;
              class OrbitPhysicalPropertiesKey;
            }
          }
        }
        namespace utils {
          class ContextBinding;
          namespace lexical {
            class ParseToken;
          }
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              class OrbitPhysicalPropertiesKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_9691cb9ab8d4852f,
                  mid_valueOf_542c22dd777a9b5c,
                  mid_values_8a33e09d36a0b824,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitPhysicalPropertiesKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitPhysicalPropertiesKey(const OrbitPhysicalPropertiesKey& obj) : ::java::lang::Enum(obj) {}

                static OrbitPhysicalPropertiesKey *AREA_ALONG_OEB_INT;
                static OrbitPhysicalPropertiesKey *AREA_ALONG_OEB_MAX;
                static OrbitPhysicalPropertiesKey *AREA_ALONG_OEB_MIN;
                static OrbitPhysicalPropertiesKey *AREA_MAX_FOR_PC;
                static OrbitPhysicalPropertiesKey *AREA_MIN_FOR_PC;
                static OrbitPhysicalPropertiesKey *AREA_TYP_FOR_PC;
                static OrbitPhysicalPropertiesKey *ATT_ACTUATOR_TYPE;
                static OrbitPhysicalPropertiesKey *ATT_CONTROL;
                static OrbitPhysicalPropertiesKey *ATT_CONTROL_MODE;
                static OrbitPhysicalPropertiesKey *ATT_KNOWLEDGE;
                static OrbitPhysicalPropertiesKey *ATT_POINTING;
                static OrbitPhysicalPropertiesKey *AVG_MANEUVER_FREQ;
                static OrbitPhysicalPropertiesKey *BUS_MODEL;
                static OrbitPhysicalPropertiesKey *COMMENT;
                static OrbitPhysicalPropertiesKey *DOCKED_WITH;
                static OrbitPhysicalPropertiesKey *DRAG_COEFF_NOM;
                static OrbitPhysicalPropertiesKey *DRAG_CONST_AREA;
                static OrbitPhysicalPropertiesKey *DRAG_UNCERTAINTY;
                static OrbitPhysicalPropertiesKey *DRY_MASS;
                static OrbitPhysicalPropertiesKey *DV_BOL;
                static OrbitPhysicalPropertiesKey *DV_REMAINING;
                static OrbitPhysicalPropertiesKey *INITIAL_WET_MASS;
                static OrbitPhysicalPropertiesKey *IXX;
                static OrbitPhysicalPropertiesKey *IXY;
                static OrbitPhysicalPropertiesKey *IXZ;
                static OrbitPhysicalPropertiesKey *IYY;
                static OrbitPhysicalPropertiesKey *IYZ;
                static OrbitPhysicalPropertiesKey *IZZ;
                static OrbitPhysicalPropertiesKey *MANUFACTURER;
                static OrbitPhysicalPropertiesKey *MAX_THRUST;
                static OrbitPhysicalPropertiesKey *OEB_INT;
                static OrbitPhysicalPropertiesKey *OEB_MAX;
                static OrbitPhysicalPropertiesKey *OEB_MIN;
                static OrbitPhysicalPropertiesKey *OEB_PARENT_FRAME;
                static OrbitPhysicalPropertiesKey *OEB_PARENT_FRAME_EPOCH;
                static OrbitPhysicalPropertiesKey *OEB_Q1;
                static OrbitPhysicalPropertiesKey *OEB_Q2;
                static OrbitPhysicalPropertiesKey *OEB_Q3;
                static OrbitPhysicalPropertiesKey *OEB_QC;
                static OrbitPhysicalPropertiesKey *RCS;
                static OrbitPhysicalPropertiesKey *RCS_MAX;
                static OrbitPhysicalPropertiesKey *RCS_MIN;
                static OrbitPhysicalPropertiesKey *REFLECTANCE;
                static OrbitPhysicalPropertiesKey *SOLAR_RAD_COEFF;
                static OrbitPhysicalPropertiesKey *SOLAR_RAD_UNCERTAINTY;
                static OrbitPhysicalPropertiesKey *SRP_CONST_AREA;
                static OrbitPhysicalPropertiesKey *VM_ABSOLUTE;
                static OrbitPhysicalPropertiesKey *VM_APPARENT;
                static OrbitPhysicalPropertiesKey *VM_APPARENT_MAX;
                static OrbitPhysicalPropertiesKey *VM_APPARENT_MIN;
                static OrbitPhysicalPropertiesKey *WET_MASS;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitPhysicalProperties &) const;
                static OrbitPhysicalPropertiesKey valueOf(const ::java::lang::String &);
                static JArray< OrbitPhysicalPropertiesKey > values();
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OrbitPhysicalPropertiesKey);
              extern PyTypeObject *PY_TYPE(OrbitPhysicalPropertiesKey);

              class t_OrbitPhysicalPropertiesKey {
              public:
                PyObject_HEAD
                OrbitPhysicalPropertiesKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_OrbitPhysicalPropertiesKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const OrbitPhysicalPropertiesKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const OrbitPhysicalPropertiesKey&, PyTypeObject *);
                static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
