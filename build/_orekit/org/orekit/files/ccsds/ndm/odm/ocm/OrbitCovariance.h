#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovariance_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitCovariance_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      class RealMatrix;
    }
  }
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
                  mid_init$_ab6484d50474cac0,
                  mid_getDate_7a97f7e149e79afb,
                  mid_getMatrix_70a207fcbc031df2,
                  mid_getType_ada74ce902d29422,
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
