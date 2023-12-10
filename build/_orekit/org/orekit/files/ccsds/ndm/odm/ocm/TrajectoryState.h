#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryState_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace utils {
      namespace units {
        class Unit;
      }
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
    }
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              class OrbitElementsType;
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

              class TrajectoryState : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_555a8c2f3364fe15,
                  mid_init$_05ae99dd5376ef2f,
                  mid_getAvailableDerivatives_237181d932324188,
                  mid_getDate_aaa854c403487cf3,
                  mid_getElements_7cdc325af0834901,
                  mid_getType_89f4b16f0349faa4,
                  mid_toCartesian_933d5fd77d5f8558,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit TrajectoryState(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                TrajectoryState(const TrajectoryState& obj) : ::java::lang::Object(obj) {}

                TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType &, const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &);
                TrajectoryState(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType &, const ::org::orekit::time::AbsoluteDate &, const JArray< ::java::lang::String > &, jint, const ::java::util::List &);

                ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
                ::org::orekit::time::AbsoluteDate getDate() const;
                JArray< jdouble > getElements() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitElementsType getType() const;
                ::org::orekit::utils::TimeStampedPVCoordinates toCartesian(const ::org::orekit::bodies::OneAxisEllipsoid &, jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(TrajectoryState);
              extern PyTypeObject *PY_TYPE(TrajectoryState);

              class t_TrajectoryState {
              public:
                PyObject_HEAD
                TrajectoryState object;
                static PyObject *wrap_Object(const TrajectoryState&);
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
