#ifndef org_orekit_propagation_analytical_gnss_data_AbstractAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_AbstractAlmanac_H

#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {
            class GNSSOrbitalElements;
          }
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
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            class AbstractAlmanac : public ::org::orekit::propagation::analytical::gnss::data::CommonGnssData {
             public:
              enum {
                mid_init$_905e65280a4e6722,
                mid_getAf2_9981f74b2d109da6,
                mid_getCic_9981f74b2d109da6,
                mid_getCis_9981f74b2d109da6,
                mid_getCrc_9981f74b2d109da6,
                mid_getCrs_9981f74b2d109da6,
                mid_getCuc_9981f74b2d109da6,
                mid_getCus_9981f74b2d109da6,
                mid_getIDot_9981f74b2d109da6,
                mid_getMeanMotion_9981f74b2d109da6,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AbstractAlmanac(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AbstractAlmanac(const AbstractAlmanac& obj) : ::org::orekit::propagation::analytical::gnss::data::CommonGnssData(obj) {}

              AbstractAlmanac(jdouble, jdouble, jint);

              jdouble getAf2() const;
              jdouble getCic() const;
              jdouble getCis() const;
              jdouble getCrc() const;
              jdouble getCrs() const;
              jdouble getCuc() const;
              jdouble getCus() const;
              jdouble getIDot() const;
              jdouble getMeanMotion() const;
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
            extern PyType_Def PY_TYPE_DEF(AbstractAlmanac);
            extern PyTypeObject *PY_TYPE(AbstractAlmanac);

            class t_AbstractAlmanac {
            public:
              PyObject_HEAD
              AbstractAlmanac object;
              static PyObject *wrap_Object(const AbstractAlmanac&);
              static PyObject *wrap_jobject(const jobject&);
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
