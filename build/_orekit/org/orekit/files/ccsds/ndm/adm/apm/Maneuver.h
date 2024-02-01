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
                  mid_init$_ff7cb6c242604316,
                  mid_getDeltaMass_9981f74b2d109da6,
                  mid_getDuration_9981f74b2d109da6,
                  mid_getEpochStart_80e11148db499dda,
                  mid_getFrame_0fc1562b68204151,
                  mid_getTorque_032312bdeb3f2f93,
                  mid_setDeltaMass_1ad26e8c8c0cd65b,
                  mid_setDuration_1ad26e8c8c0cd65b,
                  mid_setEpochStart_8497861b879c83f7,
                  mid_setFrame_2c8b859a72c0094e,
                  mid_setTorque_4320462275d66e78,
                  mid_validate_1ad26e8c8c0cd65b,
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
