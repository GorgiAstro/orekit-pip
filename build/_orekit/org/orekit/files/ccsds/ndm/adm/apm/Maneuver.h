#ifndef org_orekit_files_ccsds_ndm_adm_apm_Maneuver_H
#define org_orekit_files_ccsds_ndm_adm_apm_Maneuver_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class FrameFacade;
        }
      }
    }
    namespace time {
      class AbsoluteDate;
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
                  mid_init$_0fa09c18fee449d5,
                  mid_getDeltaMass_dff5885c2c873297,
                  mid_getDuration_dff5885c2c873297,
                  mid_getEpochStart_85703d13e302437e,
                  mid_getFrame_5d5dd95b04037824,
                  mid_getTorque_d52645e0d4c07563,
                  mid_setDeltaMass_17db3a65980d3441,
                  mid_setDuration_17db3a65980d3441,
                  mid_setEpochStart_600a2a61652bc473,
                  mid_setFrame_849bc9e3b38b9bcb,
                  mid_setTorque_bb79ca80d85d0a66,
                  mid_validate_17db3a65980d3441,
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
