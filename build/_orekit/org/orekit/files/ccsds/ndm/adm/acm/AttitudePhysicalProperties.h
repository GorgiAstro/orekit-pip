#ifndef org_orekit_files_ccsds_ndm_adm_acm_AttitudePhysicalProperties_H
#define org_orekit_files_ccsds_ndm_adm_acm_AttitudePhysicalProperties_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace org {
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
                  mid_init$_e82d68cd9f886886,
                  mid_getCenterOfPressure_17a952530a808943,
                  mid_getCenterOfPressureReferenceFrame_aa70fdb14ae9305f,
                  mid_getDragCoefficient_456d9a2f64d6b28d,
                  mid_getDryMass_456d9a2f64d6b28d,
                  mid_getInertiaMatrix_7116bbecdd8ceb21,
                  mid_getInertiaReferenceFrame_aa70fdb14ae9305f,
                  mid_getWetMass_456d9a2f64d6b28d,
                  mid_setCenterOfPressure_a94622407b723689,
                  mid_setCenterOfPressureReferenceFrame_a455f3ff24eb0b47,
                  mid_setDragCoefficient_77e0f9a1f260e2e5,
                  mid_setDryMass_77e0f9a1f260e2e5,
                  mid_setInertiaMatrixEntry_78e41e7b5124a628,
                  mid_setInertiaReferenceFrame_a455f3ff24eb0b47,
                  mid_setWetMass_77e0f9a1f260e2e5,
                  mid_validate_77e0f9a1f260e2e5,
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
