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
                  mid_init$_02135a6ef25adb4b,
                  mid_getCenterOfPressure_8b724f8b4fdad1a2,
                  mid_getCenterOfPressureReferenceFrame_69d8be1b6b0a1a94,
                  mid_getDragCoefficient_b74f83833fdad017,
                  mid_getDryMass_b74f83833fdad017,
                  mid_getInertiaMatrix_f77d745f2128c391,
                  mid_getInertiaReferenceFrame_69d8be1b6b0a1a94,
                  mid_getWetMass_b74f83833fdad017,
                  mid_setCenterOfPressure_1844f891addbac57,
                  mid_setCenterOfPressureReferenceFrame_4755133c5c4c59be,
                  mid_setDragCoefficient_8ba9fe7a847cecad,
                  mid_setDryMass_8ba9fe7a847cecad,
                  mid_setInertiaMatrixEntry_94fe8d9ffeb50676,
                  mid_setInertiaReferenceFrame_4755133c5c4c59be,
                  mid_setWetMass_8ba9fe7a847cecad,
                  mid_validate_8ba9fe7a847cecad,
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
