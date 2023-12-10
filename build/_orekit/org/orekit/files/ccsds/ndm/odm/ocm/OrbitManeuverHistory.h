#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistory_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuverHistory_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitManeuverHistoryMetadata;
              class OrbitManeuver;
            }
          }
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
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
          namespace odm {
            namespace ocm {

              class OrbitManeuverHistory : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_37938e13c4b70b47,
                  mid_getManeuvers_2afa36052df4765d,
                  mid_getMetadata_80f8bc417c20f379,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitManeuverHistory(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitManeuverHistory(const OrbitManeuverHistory& obj) : ::java::lang::Object(obj) {}

                OrbitManeuverHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata &, const ::java::util::List &);

                ::java::util::List getManeuvers() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata getMetadata() const;
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
              extern PyType_Def PY_TYPE_DEF(OrbitManeuverHistory);
              extern PyTypeObject *PY_TYPE(OrbitManeuverHistory);

              class t_OrbitManeuverHistory {
              public:
                PyObject_HEAD
                OrbitManeuverHistory object;
                static PyObject *wrap_Object(const OrbitManeuverHistory&);
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
