#ifndef org_orekit_estimation_measurements_gnss_WindUpFactory_H
#define org_orekit_estimation_measurements_gnss_WindUpFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class Dipole;
          class WindUp;
        }
      }
    }
    namespace gnss {
      class SatelliteSystem;
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
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class WindUpFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_getWindUp_b5ce2e03b1b3656d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WindUpFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WindUpFactory(const WindUpFactory& obj) : ::java::lang::Object(obj) {}

            WindUpFactory();

            ::org::orekit::estimation::measurements::gnss::WindUp getWindUp(const ::org::orekit::gnss::SatelliteSystem &, jint, const ::org::orekit::estimation::measurements::gnss::Dipole &, const ::java::lang::String &) const;
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
          extern PyType_Def PY_TYPE_DEF(WindUpFactory);
          extern PyTypeObject *PY_TYPE(WindUpFactory);

          class t_WindUpFactory {
          public:
            PyObject_HEAD
            WindUpFactory object;
            static PyObject *wrap_Object(const WindUpFactory&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
