#ifndef org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuver_H
#define org_orekit_files_ccsds_ndm_odm_ocm_OrbitManeuver_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
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
                  mid_init$_0fa09c18fee449d5,
                  mid_getAcceleration_d52645e0d4c07563,
                  mid_getAccelerationDirectionSigma_dff5885c2c873297,
                  mid_getAccelerationInterpolation_dbd08cb2db8aa7a2,
                  mid_getAccelerationMagnitudeSigma_dff5885c2c873297,
                  mid_getDate_85703d13e302437e,
                  mid_getDeltaMass_dff5885c2c873297,
                  mid_getDeployDirSigma_dff5885c2c873297,
                  mid_getDeployDv_d52645e0d4c07563,
                  mid_getDeployDvCda_dff5885c2c873297,
                  mid_getDeployDvRatio_dff5885c2c873297,
                  mid_getDeployDvSigma_dff5885c2c873297,
                  mid_getDeployId_11b109bd155ca898,
                  mid_getDeployMass_dff5885c2c873297,
                  mid_getDuration_dff5885c2c873297,
                  mid_getDv_d52645e0d4c07563,
                  mid_getDvDirSigma_dff5885c2c873297,
                  mid_getDvMagSigma_dff5885c2c873297,
                  mid_getThrust_d52645e0d4c07563,
                  mid_getThrustDirectionSigma_dff5885c2c873297,
                  mid_getThrustEfficiency_dff5885c2c873297,
                  mid_getThrustInterpolation_dbd08cb2db8aa7a2,
                  mid_getThrustIsp_dff5885c2c873297,
                  mid_getThrustMagnitudeSigma_dff5885c2c873297,
                  mid_setAcceleration_bb79ca80d85d0a66,
                  mid_setAccelerationDirectionSigma_17db3a65980d3441,
                  mid_setAccelerationInterpolation_2cbb135764dcc859,
                  mid_setAccelerationMagnitudeSigma_17db3a65980d3441,
                  mid_setDate_600a2a61652bc473,
                  mid_setDeltaMass_17db3a65980d3441,
                  mid_setDeployDirSigma_17db3a65980d3441,
                  mid_setDeployDv_bb79ca80d85d0a66,
                  mid_setDeployDvCda_17db3a65980d3441,
                  mid_setDeployDvRatio_17db3a65980d3441,
                  mid_setDeployDvSigma_17db3a65980d3441,
                  mid_setDeployId_d0bc48d5b00dc40c,
                  mid_setDeployMass_17db3a65980d3441,
                  mid_setDuration_17db3a65980d3441,
                  mid_setDv_bb79ca80d85d0a66,
                  mid_setDvDirSigma_17db3a65980d3441,
                  mid_setDvMagSigma_17db3a65980d3441,
                  mid_setThrust_bb79ca80d85d0a66,
                  mid_setThrustDirectionSigma_17db3a65980d3441,
                  mid_setThrustEfficiency_17db3a65980d3441,
                  mid_setThrustInterpolation_2cbb135764dcc859,
                  mid_setThrustIsp_17db3a65980d3441,
                  mid_setThrustMagnitudeSigma_17db3a65980d3441,
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
