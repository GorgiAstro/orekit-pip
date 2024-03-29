#ifndef org_orekit_estimation_measurements_gnss_CombinationType_H
#define org_orekit_estimation_measurements_gnss_CombinationType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class CombinationType;
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
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class CombinationType : public ::java::lang::Enum {
           public:
            enum {
              mid_getName_d2c8eb4129821f0e,
              mid_valueOf_d7d66d7d315002e4,
              mid_values_b9091cb74b751f30,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CombinationType(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CombinationType(const CombinationType& obj) : ::java::lang::Enum(obj) {}

            static CombinationType *GEOMETRY_FREE;
            static CombinationType *GRAPHIC;
            static CombinationType *IONO_FREE;
            static CombinationType *MELBOURNE_WUBBENA;
            static CombinationType *NARROW_LANE;
            static CombinationType *PHASE_MINUS_CODE;
            static CombinationType *WIDE_LANE;

            ::java::lang::String getName() const;
            static CombinationType valueOf(const ::java::lang::String &);
            static JArray< CombinationType > values();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          extern PyType_Def PY_TYPE_DEF(CombinationType);
          extern PyTypeObject *PY_TYPE(CombinationType);

          class t_CombinationType {
          public:
            PyObject_HEAD
            CombinationType object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_CombinationType *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const CombinationType&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const CombinationType&, PyTypeObject *);
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
