#ifndef org_orekit_files_ccsds_ndm_adm_apm_Maneuver_H
#define org_orekit_files_ccsds_ndm_adm_apm_Maneuver_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
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
          namespace adm {
            namespace apm {

              class Maneuver : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_7ae3461a92a43152,
                  mid_getDeltaMass_456d9a2f64d6b28d,
                  mid_getDuration_456d9a2f64d6b28d,
                  mid_getEpochStart_aaa854c403487cf3,
                  mid_getFrame_aa70fdb14ae9305f,
                  mid_getTorque_17a952530a808943,
                  mid_setDeltaMass_77e0f9a1f260e2e5,
                  mid_setDuration_77e0f9a1f260e2e5,
                  mid_setEpochStart_e82d68cd9f886886,
                  mid_setFrame_a455f3ff24eb0b47,
                  mid_setTorque_987a5fb872043b12,
                  mid_validate_77e0f9a1f260e2e5,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Maneuver(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Maneuver(const Maneuver& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                Maneuver();

                jdouble getDeltaMass() const;
                jdouble getDuration() const;
                ::org::orekit::time::AbsoluteDate getEpochStart() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getFrame() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getTorque() const;
                void setDeltaMass(jdouble) const;
                void setDuration(jdouble) const;
                void setEpochStart(const ::org::orekit::time::AbsoluteDate &) const;
                void setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setTorque(jint, jdouble) const;
                void validate(jdouble) const;
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
          namespace adm {
            namespace apm {
              extern PyType_Def PY_TYPE_DEF(Maneuver);
              extern PyTypeObject *PY_TYPE(Maneuver);

              class t_Maneuver {
              public:
                PyObject_HEAD
                Maneuver object;
                static PyObject *wrap_Object(const Maneuver&);
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
