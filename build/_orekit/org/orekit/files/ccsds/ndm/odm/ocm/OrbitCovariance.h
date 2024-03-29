#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovariance_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitElementsType;
              class Ordering;
            }
          }
        }
      }
    }
  }
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              class OrbitCovariance : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_07cdcdace9ceb3ee,
                  mid_getDate_80e11148db499dda,
                  mid_getMatrix_b2eebabce70526d8,
                  mid_getType_53d3e424bd18099f,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitCovariance(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitCovariance(const OrbitCovariance& obj) : ::java::lang::Object(obj) {}

                OrbitCovariance(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType &, const ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering &, const ::org::orekit::time::AbsoluteDate &, const JArray< ::java::lang::String > &, jint);

                ::org::orekit::time::AbsoluteDate getDate() const;
                ::org::hipparchus::linear::RealMatrix getMatrix() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType getType() const;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              extern PyType_Def PY_TYPE_DEF(OrbitCovariance);
              extern PyTypeObject *PY_TYPE(OrbitCovariance);

              class t_OrbitCovariance {
              public:
                PyObject_HEAD
                OrbitCovariance object;
                static PyObject *wrap_Object(const OrbitCovariance&);
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
}

#endif
