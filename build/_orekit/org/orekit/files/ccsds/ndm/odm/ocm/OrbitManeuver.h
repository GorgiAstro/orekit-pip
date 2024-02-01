#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuver_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
    }
    namespace files {
      namespace ccsds {
        namespace definitions {
          class OnOff;
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

              class OrbitManeuver : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_ff7cb6c242604316,
                  mid_getAcceleration_032312bdeb3f2f93,
                  mid_getAccelerationDirectionSigma_9981f74b2d109da6,
                  mid_getAccelerationInterpolation_e23534c41f0aed88,
                  mid_getAccelerationMagnitudeSigma_9981f74b2d109da6,
                  mid_getDate_80e11148db499dda,
                  mid_getDeltaMass_9981f74b2d109da6,
                  mid_getDeployDirSigma_9981f74b2d109da6,
                  mid_getDeployDv_032312bdeb3f2f93,
                  mid_getDeployDvCda_9981f74b2d109da6,
                  mid_getDeployDvRatio_9981f74b2d109da6,
                  mid_getDeployDvSigma_9981f74b2d109da6,
                  mid_getDeployId_d2c8eb4129821f0e,
                  mid_getDeployMass_9981f74b2d109da6,
                  mid_getDuration_9981f74b2d109da6,
                  mid_getDv_032312bdeb3f2f93,
                  mid_getDvDirSigma_9981f74b2d109da6,
                  mid_getDvMagSigma_9981f74b2d109da6,
                  mid_getThrust_032312bdeb3f2f93,
                  mid_getThrustDirectionSigma_9981f74b2d109da6,
                  mid_getThrustEfficiency_9981f74b2d109da6,
                  mid_getThrustInterpolation_e23534c41f0aed88,
                  mid_getThrustIsp_9981f74b2d109da6,
                  mid_getThrustMagnitudeSigma_9981f74b2d109da6,
                  mid_setAcceleration_4320462275d66e78,
                  mid_setAccelerationDirectionSigma_1ad26e8c8c0cd65b,
                  mid_setAccelerationInterpolation_85cc0845124bde4e,
                  mid_setAccelerationMagnitudeSigma_1ad26e8c8c0cd65b,
                  mid_setDate_8497861b879c83f7,
                  mid_setDeltaMass_1ad26e8c8c0cd65b,
                  mid_setDeployDirSigma_1ad26e8c8c0cd65b,
                  mid_setDeployDv_4320462275d66e78,
                  mid_setDeployDvCda_1ad26e8c8c0cd65b,
                  mid_setDeployDvRatio_1ad26e8c8c0cd65b,
                  mid_setDeployDvSigma_1ad26e8c8c0cd65b,
                  mid_setDeployId_105e1eadb709d9ac,
                  mid_setDeployMass_1ad26e8c8c0cd65b,
                  mid_setDuration_1ad26e8c8c0cd65b,
                  mid_setDv_4320462275d66e78,
                  mid_setDvDirSigma_1ad26e8c8c0cd65b,
                  mid_setDvMagSigma_1ad26e8c8c0cd65b,
                  mid_setThrust_4320462275d66e78,
                  mid_setThrustDirectionSigma_1ad26e8c8c0cd65b,
                  mid_setThrustEfficiency_1ad26e8c8c0cd65b,
                  mid_setThrustInterpolation_85cc0845124bde4e,
                  mid_setThrustIsp_1ad26e8c8c0cd65b,
                  mid_setThrustMagnitudeSigma_1ad26e8c8c0cd65b,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OrbitManeuver(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OrbitManeuver(const OrbitManeuver& obj) : ::java::lang::Object(obj) {}

                OrbitManeuver();

                ::org::hipparchus::geometry::euclidean::threed::Vector3D getAcceleration() const;
                jdouble getAccelerationDirectionSigma() const;
                ::org::orekit::files::ccsds::definitions::OnOff getAccelerationInterpolation() const;
                jdouble getAccelerationMagnitudeSigma() const;
                ::org::orekit::time::AbsoluteDate getDate() const;
                jdouble getDeltaMass() const;
                jdouble getDeployDirSigma() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getDeployDv() const;
                jdouble getDeployDvCda() const;
                jdouble getDeployDvRatio() const;
                jdouble getDeployDvSigma() const;
                ::java::lang::String getDeployId() const;
                jdouble getDeployMass() const;
                jdouble getDuration() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getDv() const;
                jdouble getDvDirSigma() const;
                jdouble getDvMagSigma() const;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D getThrust() const;
                jdouble getThrustDirectionSigma() const;
                jdouble getThrustEfficiency() const;
                ::org::orekit::files::ccsds::definitions::OnOff getThrustInterpolation() const;
                jdouble getThrustIsp() const;
                jdouble getThrustMagnitudeSigma() const;
                void setAcceleration(jint, jdouble) const;
                void setAccelerationDirectionSigma(jdouble) const;
                void setAccelerationInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff &) const;
                void setAccelerationMagnitudeSigma(jdouble) const;
                void setDate(const ::org::orekit::time::AbsoluteDate &) const;
                void setDeltaMass(jdouble) const;
                void setDeployDirSigma(jdouble) const;
                void setDeployDv(jint, jdouble) const;
                void setDeployDvCda(jdouble) const;
                void setDeployDvRatio(jdouble) const;
                void setDeployDvSigma(jdouble) const;
                void setDeployId(const ::java::lang::String &) const;
                void setDeployMass(jdouble) const;
                void setDuration(jdouble) const;
                void setDv(jint, jdouble) const;
                void setDvDirSigma(jdouble) const;
                void setDvMagSigma(jdouble) const;
                void setThrust(jint, jdouble) const;
                void setThrustDirectionSigma(jdouble) const;
                void setThrustEfficiency(jdouble) const;
                void setThrustInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff &) const;
                void setThrustIsp(jdouble) const;
                void setThrustMagnitudeSigma(jdouble) const;
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
              extern PyType_Def PY_TYPE_DEF(OrbitManeuver);
              extern PyTypeObject *PY_TYPE(OrbitManeuver);

              class t_OrbitManeuver {
              public:
                PyObject_HEAD
                OrbitManeuver object;
                static PyObject *wrap_Object(const OrbitManeuver&);
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
