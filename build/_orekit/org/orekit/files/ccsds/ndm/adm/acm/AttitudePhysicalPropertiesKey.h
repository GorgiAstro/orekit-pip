#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudePhysicalPropertiesKey_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudePhysicalPropertiesKey_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {
            class ParseToken;
          }
          class ContextBinding;
        }
        namespace ndm {
          namespace adm {
            namespace acm {
              class AttitudePhysicalProperties;
              class AttitudePhysicalPropertiesKey;
            }
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
          namespace adm {
            namespace acm {

              class AttitudePhysicalPropertiesKey : public ::java::lang::Enum {
               public:
                enum {
                  mid_process_4e16a4054ae03944,
                  mid_valueOf_f38b14ffdef5cb46,
                  mid_values_1cca4be7de8a1754,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudePhysicalPropertiesKey(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudePhysicalPropertiesKey(const AttitudePhysicalPropertiesKey& obj) : ::java::lang::Enum(obj) {}

                static AttitudePhysicalPropertiesKey *COMMENT;
                static AttitudePhysicalPropertiesKey *CP;
                static AttitudePhysicalPropertiesKey *CP_REF_FRAME;
                static AttitudePhysicalPropertiesKey *DRAG_COEFF;
                static AttitudePhysicalPropertiesKey *DRY_MASS;
                static AttitudePhysicalPropertiesKey *INERTIA_REF_FRAME;
                static AttitudePhysicalPropertiesKey *IXX;
                static AttitudePhysicalPropertiesKey *IXY;
                static AttitudePhysicalPropertiesKey *IXZ;
                static AttitudePhysicalPropertiesKey *IYY;
                static AttitudePhysicalPropertiesKey *IYZ;
                static AttitudePhysicalPropertiesKey *IZZ;
                static AttitudePhysicalPropertiesKey *WET_MASS;

                jboolean process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken &, const ::org::orekit::files::ccsds::utils::ContextBinding &, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudePhysicalProperties &) const;
                static AttitudePhysicalPropertiesKey valueOf(const ::java::lang::String &);
                static JArray< AttitudePhysicalPropertiesKey > values();
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
          namespace adm {
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AttitudePhysicalPropertiesKey);
              extern PyTypeObject *PY_TYPE(AttitudePhysicalPropertiesKey);

              class t_AttitudePhysicalPropertiesKey {
              public:
                PyObject_HEAD
                AttitudePhysicalPropertiesKey object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_AttitudePhysicalPropertiesKey *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const AttitudePhysicalPropertiesKey&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const AttitudePhysicalPropertiesKey&, PyTypeObject *);
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
