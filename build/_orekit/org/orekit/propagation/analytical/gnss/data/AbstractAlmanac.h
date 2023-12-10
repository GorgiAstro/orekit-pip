#ifndef org_orekit_propagation_analytical_gnss_data_AbstractAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_AbstractAlmanac_H

#include "org/orekit/propagation/analytical/gnss/data/CommonGnssData.h"

namespace java {
  namespace lang {
    class Class;
  }
}
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
                mid_init$_b05c288d5068eccb,
                mid_getAf2_456d9a2f64d6b28d,
                mid_getCic_456d9a2f64d6b28d,
                mid_getCis_456d9a2f64d6b28d,
                mid_getCrc_456d9a2f64d6b28d,
                mid_getCrs_456d9a2f64d6b28d,
                mid_getCuc_456d9a2f64d6b28d,
                mid_getCus_456d9a2f64d6b28d,
                mid_getIDot_456d9a2f64d6b28d,
                mid_getMeanMotion_456d9a2f64d6b28d,
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
