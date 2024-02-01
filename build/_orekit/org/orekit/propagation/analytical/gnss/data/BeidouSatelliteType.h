#ifndef org_orekit_propagation_analytical_gnss_data_BeidouSatelliteType_H
#define org_orekit_propagation_analytical_gnss_data_BeidouSatelliteType_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class BeidouSatelliteType;
          }
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
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            class BeidouSatelliteType : public ::java::lang::Enum {
             public:
              enum {
                mid_valueOf_91dfb4d49573d203,
                mid_values_9bf97d332c4b5b16,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit BeidouSatelliteType(jobject obj) : ::java::lang::Enum(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              BeidouSatelliteType(const BeidouSatelliteType& obj) : ::java::lang::Enum(obj) {}

              static BeidouSatelliteType *GEO;
              static BeidouSatelliteType *IGSO;
              static BeidouSatelliteType *MEO;
              static BeidouSatelliteType *RESERVED;

              static BeidouSatelliteType valueOf(const ::java::lang::String &);
              static JArray< BeidouSatelliteType > values();
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            extern PyType_Def PY_TYPE_DEF(BeidouSatelliteType);
            extern PyTypeObject *PY_TYPE(BeidouSatelliteType);

            class t_BeidouSatelliteType {
            public:
              PyObject_HEAD
              BeidouSatelliteType object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_BeidouSatelliteType *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const BeidouSatelliteType&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const BeidouSatelliteType&, PyTypeObject *);
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

#endif
