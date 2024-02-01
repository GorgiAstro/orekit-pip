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
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
    namespace linear {
      class RealMatrix;
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
                  mid_init$_8497861b879c83f7,
                  mid_getCenterOfPressure_032312bdeb3f2f93,
                  mid_getCenterOfPressureReferenceFrame_0fc1562b68204151,
                  mid_getDragCoefficient_9981f74b2d109da6,
                  mid_getDryMass_9981f74b2d109da6,
                  mid_getInertiaMatrix_b2eebabce70526d8,
                  mid_getInertiaReferenceFrame_0fc1562b68204151,
                  mid_getWetMass_9981f74b2d109da6,
                  mid_setCenterOfPressure_30f8886dfb88a63c,
                  mid_setCenterOfPressureReferenceFrame_2c8b859a72c0094e,
                  mid_setDragCoefficient_1ad26e8c8c0cd65b,
                  mid_setDryMass_1ad26e8c8c0cd65b,
                  mid_setInertiaMatrixEntry_e98d7b3e971b6087,
                  mid_setInertiaReferenceFrame_2c8b859a72c0094e,
                  mid_setWetMass_1ad26e8c8c0cd65b,
                  mid_validate_1ad26e8c8c0cd65b,
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
