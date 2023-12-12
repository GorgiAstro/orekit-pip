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
                mid_init$_427af08acba367ca,
                mid_getAf2_557b8123390d8d0c,
                mid_getCic_557b8123390d8d0c,
                mid_getCis_557b8123390d8d0c,
                mid_getCrc_557b8123390d8d0c,
                mid_getCrs_557b8123390d8d0c,
                mid_getCuc_557b8123390d8d0c,
                mid_getCus_557b8123390d8d0c,
                mid_getIDot_557b8123390d8d0c,
                mid_getMeanMotion_557b8123390d8d0c,
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
