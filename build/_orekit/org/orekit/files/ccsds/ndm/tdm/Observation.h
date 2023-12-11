#ifndef org_orekit_files_ccsds_ndm_tdm_Observation_H
#define org_orekit_files_ccsds_ndm_tdm_Observation_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            class ObservationType;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            class Observation : public ::java::lang::Object {
             public:
              enum {
                mid_init$_f1cf86cd74f431e1,
                mid_getEpoch_7a97f7e149e79afb,
                mid_getMeasurement_557b8123390d8d0c,
                mid_getType_586ffde90508f09b,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Observation(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Observation(const Observation& obj) : ::java::lang::Object(obj) {}

              Observation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType &, const ::org::orekit::time::AbsoluteDate &, jdouble);

              ::org::orekit::time::AbsoluteDate getEpoch() const;
              jdouble getMeasurement() const;
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType getType() const;
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {
            extern PyType_Def PY_TYPE_DEF(Observation);
            extern PyTypeObject *PY_TYPE(Observation);

            class t_Observation {
            public:
              PyObject_HEAD
              Observation object;
              static PyObject *wrap_Object(const Observation&);
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
