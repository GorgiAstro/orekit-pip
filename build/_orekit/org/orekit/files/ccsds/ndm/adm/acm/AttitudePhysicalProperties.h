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
                  mid_init$_20affcbd28542333,
                  mid_getCenterOfPressure_f88961cca75a2c0a,
                  mid_getCenterOfPressureReferenceFrame_98f5fcaff3e3f9d2,
                  mid_getDragCoefficient_557b8123390d8d0c,
                  mid_getDryMass_557b8123390d8d0c,
                  mid_getInertiaMatrix_70a207fcbc031df2,
                  mid_getInertiaReferenceFrame_98f5fcaff3e3f9d2,
                  mid_getWetMass_557b8123390d8d0c,
                  mid_setCenterOfPressure_2810d2bec90e7b1c,
                  mid_setCenterOfPressureReferenceFrame_f55eee1236275bb1,
                  mid_setDragCoefficient_10f281d777284cea,
                  mid_setDryMass_10f281d777284cea,
                  mid_setInertiaMatrixEntry_754312f3734d6e2f,
                  mid_setInertiaReferenceFrame_f55eee1236275bb1,
                  mid_setWetMass_10f281d777284cea,
                  mid_validate_10f281d777284cea,
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
