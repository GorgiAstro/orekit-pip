#ifndef org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DPOCMethodType_H
#define org_orekit_ssa_collision_shorttermencounter_probability_twod_ShortTermEncounter2DPOCMethodType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              class ShortTermEncounter2DPOCMethodType;
              class ShortTermEncounter2DPOCMethod;
            }
          }
        }
      }
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class PocMethodType;
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              class ShortTermEncounter2DPOCMethodType : public ::java::lang::Enum {
               public:
                enum {
                  mid_getCCSDSType_c2b5c6ffc15c5f1d,
                  mid_getMethod_caebdf5d02cb71c0,
                  mid_valueOf_3fe5f6c9da97ef39,
                  mid_values_5f6a8ed784b3e994,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit ShortTermEncounter2DPOCMethodType(jobject obj) : ::java::lang::Enum(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                ShortTermEncounter2DPOCMethodType(const ShortTermEncounter2DPOCMethodType& obj) : ::java::lang::Enum(obj) {}

                static ShortTermEncounter2DPOCMethodType *ALFANO_2005;
                static ShortTermEncounter2DPOCMethodType *ALFRIEND_1999;
                static ShortTermEncounter2DPOCMethodType *ALFRIEND_1999_MAX;
                static ShortTermEncounter2DPOCMethodType *CHAN_1997;
                static ShortTermEncounter2DPOCMethodType *LAAS_2015;
                static ShortTermEncounter2DPOCMethodType *PATERA_2005;

                ::org::orekit::files::ccsds::definitions::PocMethodType getCCSDSType() const;
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethod getMethod() const;
                static ShortTermEncounter2DPOCMethodType valueOf(const ::java::lang::String &);
                static JArray< ShortTermEncounter2DPOCMethodType > values();
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
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              extern PyType_Def PY_TYPE_DEF(ShortTermEncounter2DPOCMethodType);
              extern PyTypeObject *PY_TYPE(ShortTermEncounter2DPOCMethodType);

              class t_ShortTermEncounter2DPOCMethodType {
              public:
                PyObject_HEAD
                ShortTermEncounter2DPOCMethodType object;
                PyTypeObject *parameters[1];
                static PyTypeObject **parameters_(t_ShortTermEncounter2DPOCMethodType *self)
                {
                  return (PyTypeObject **) &(self->parameters);
                }
                static PyObject *wrap_Object(const ShortTermEncounter2DPOCMethodType&);
                static PyObject *wrap_jobject(const jobject&);
                static PyObject *wrap_Object(const ShortTermEncounter2DPOCMethodType&, PyTypeObject *);
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
