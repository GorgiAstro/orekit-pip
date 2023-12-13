#ifndef org_orekit_estimation_measurements_gnss_InterSatellitesWindUpFactory_H
#define org_orekit_estimation_measurements_gnss_InterSatellitesWindUpFactory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace gnss {
      class SatelliteSystem;
    }
    namespace estimation {
      namespace measurements {
        namespace gnss {
          class Dipole;
          class InterSatellitesWindUp;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          class InterSatellitesWindUpFactory : public ::java::lang::Object {
           public:
            enum {
              mid_init$_a1fa5dae97ea5ed2,
              mid_getWindUp_d43e329098b8b3ea,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit InterSatellitesWindUpFactory(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            InterSatellitesWindUpFactory(const InterSatellitesWindUpFactory& obj) : ::java::lang::Object(obj) {}

            InterSatellitesWindUpFactory();

            ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp getWindUp(const ::org::orekit::gnss::SatelliteSystem &, jint, const ::org::orekit::estimation::measurements::gnss::Dipole &, const ::org::orekit::gnss::SatelliteSystem &, jint, const ::org::orekit::estimation::measurements::gnss::Dipole &) const;
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
          extern PyType_Def PY_TYPE_DEF(InterSatellitesWindUpFactory);
          extern PyTypeObject *PY_TYPE(InterSatellitesWindUpFactory);

          class t_InterSatellitesWindUpFactory {
          public:
            PyObject_HEAD
            InterSatellitesWindUpFactory object;
            static PyObject *wrap_Object(const InterSatellitesWindUpFactory&);
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
