#ifndef org_orekit_propagation_analytical_gnss_data_QZSSAlmanac_H
#define org_orekit_propagation_analytical_gnss_data_QZSSAlmanac_H

#include "org/orekit/propagation/analytical/gnss/data/AbstractAlmanac.h"

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

            class QZSSAlmanac : public ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac {
             public:
              enum {
                mid_init$_a1fa5dae97ea5ed2,
                mid_getHealth_55546ef6a647f39b,
                mid_getSource_1c1fa1e935d6cdcf,
                mid_setHealth_44ed599e93e8a30c,
                mid_setSource_734b91ac30d5f9b4,
                mid_setSqrtA_8ba9fe7a847cecad,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit QZSSAlmanac(jobject obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              QZSSAlmanac(const QZSSAlmanac& obj) : ::org::orekit::propagation::analytical::gnss::data::AbstractAlmanac(obj) {}

              QZSSAlmanac();

              jint getHealth() const;
              ::java::lang::String getSource() const;
              void setHealth(jint) const;
              void setSource(const ::java::lang::String &) const;
              void setSqrtA(jdouble) const;
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
            extern PyType_Def PY_TYPE_DEF(QZSSAlmanac);
            extern PyTypeObject *PY_TYPE(QZSSAlmanac);

            class t_QZSSAlmanac {
            public:
              PyObject_HEAD
              QZSSAlmanac object;
              static PyObject *wrap_Object(const QZSSAlmanac&);
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
