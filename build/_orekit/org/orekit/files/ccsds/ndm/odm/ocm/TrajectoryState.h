#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryState_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryState_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
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
    namespace utils {
      namespace units {
        class Unit;
      }
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
    }
    namespace bodies {
      class OneAxisEllipsoid;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
                  mid_init$_0d3cc9d72a4f2928,
                  mid_init$_43d47814b78412bd,
                  mid_getAvailableDerivatives_16e9a7b5414faf2d,
                  mid_getDate_85703d13e302437e,
                  mid_getElements_60c7040667a7dc5c,
                  mid_getType_f6a584069fbe1b12,
                  mid_toCartesian_e4aeebae5229dc38,
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
