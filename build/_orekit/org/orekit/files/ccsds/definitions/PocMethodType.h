#ifndef org_orekit_files_ccsds_definitions_PocMethodType_H
#define org_orekit_files_ccsds_definitions_PocMethodType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              class ShortTermEncounter2DPOCMethodType;
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
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          class PocMethodType : public ::java::lang::Enum {
           public:
            enum {
              mid_getCCSDSName_11b109bd155ca898,
              mid_getMethodType_5d7ecb27bb5e3bc3,
              mid_valueOf_5a2f6d46714799f2,
              mid_values_4d281f4171bc31e1,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PocMethodType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PocMethodType(const PocMethodType& obj) : ::java::lang::Enum(obj) {}

            static PocMethodType *AKELLAALFRIEND_2000;
            static PocMethodType *ALFANO_2005;
            static PocMethodType *ALFANO_MAX_PROBABILITY;
            static PocMethodType *ALFANO_PARAL_2007;
            static PocMethodType *ALFANO_TUBES_2007;
            static PocMethodType *ALFANO_VOXELS_2006;
            static PocMethodType *ALFRIEND_1999;
            static PocMethodType *CHAN_1997;
            static PocMethodType *CHAN_2003;
            static PocMethodType *FOSTER_1992;
            static PocMethodType *MCKINLEY_2006;
            static PocMethodType *PATERA_2001;
            static PocMethodType *PATERA_2003;
            static PocMethodType *PATERA_2005;

            ::java::lang::String getCCSDSName() const;
            ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType getMethodType() const;
            static PocMethodType valueOf(const ::java::lang::String &);
            static JArray< PocMethodType > values();
          };
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
        namespace definitions {
          extern PyType_Def PY_TYPE_DEF(PocMethodType);
          extern PyTypeObject *PY_TYPE(PocMethodType);

          class t_PocMethodType {
          public:
            PyObject_HEAD
            PocMethodType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_PocMethodType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const PocMethodType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const PocMethodType&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
