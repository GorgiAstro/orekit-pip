#ifndef org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryState_H
#define org_orekit_files_ccsds_ndm_odm_ocm_TrajectoryState_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
                  mid_init$_26353228e626a9b0,
                  mid_init$_0bcd8384b44d4acf,
                  mid_getAvailableDerivatives_6c4898d6ec0c3837,
                  mid_getDate_7a97f7e149e79afb,
                  mid_getElements_a53a7513ecedada2,
                  mid_getType_ada74ce902d29422,
                  mid_toCartesian_2741d46a9a4d5b3e,
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
