#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudePhysicalProperties_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudePhysicalProperties_H

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
    namespace linear {
      class RealMatrix;
    }
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
            namespace acm {

              class AttitudePhysicalProperties : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_600a2a61652bc473,
                  mid_getCenterOfPressure_d52645e0d4c07563,
                  mid_getCenterOfPressureReferenceFrame_5d5dd95b04037824,
                  mid_getDragCoefficient_dff5885c2c873297,
                  mid_getDryMass_dff5885c2c873297,
                  mid_getInertiaMatrix_688b496048ff947b,
                  mid_getInertiaReferenceFrame_5d5dd95b04037824,
                  mid_getWetMass_dff5885c2c873297,
                  mid_setCenterOfPressure_029ff0cbf68ea054,
                  mid_setCenterOfPressureReferenceFrame_849bc9e3b38b9bcb,
                  mid_setDragCoefficient_17db3a65980d3441,
                  mid_setDryMass_17db3a65980d3441,
                  mid_setInertiaMatrixEntry_1506189166690b5e,
                  mid_setInertiaReferenceFrame_849bc9e3b38b9bcb,
                  mid_setWetMass_17db3a65980d3441,
                  mid_validate_17db3a65980d3441,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit AttitudePhysicalProperties(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                AttitudePhysicalProperties(const AttitudePhysicalProperties& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                AttitudePhysicalProperties(const ::org::orekit::time::AbsoluteDate &);

                ::org::hipparchus::geometry::euclidean::threed::Vector3D getCenterOfPressure() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getCenterOfPressureReferenceFrame() const;
                jdouble getDragCoefficient() const;
                jdouble getDryMass() const;
                ::org::hipparchus::linear::RealMatrix getInertiaMatrix() const;
                ::org::orekit::files::ccsds::definitions::FrameFacade getInertiaReferenceFrame() const;
                jdouble getWetMass() const;
                void setCenterOfPressure(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &) const;
                void setCenterOfPressureReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setDragCoefficient(jdouble) const;
                void setDryMass(jdouble) const;
                void setInertiaMatrixEntry(jint, jint, jdouble) const;
                void setInertiaReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade &) const;
                void setWetMass(jdouble) const;
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
            namespace acm {
              extern PyType_Def PY_TYPE_DEF(AttitudePhysicalProperties);
              extern PyTypeObject *PY_TYPE(AttitudePhysicalProperties);

              class t_AttitudePhysicalProperties {
              public:
                PyObject_HEAD
                AttitudePhysicalProperties object;
                static PyObject *wrap_Object(const AttitudePhysicalProperties&);
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
