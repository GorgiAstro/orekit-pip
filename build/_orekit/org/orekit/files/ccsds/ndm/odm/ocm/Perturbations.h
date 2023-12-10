#ifndef org_orekit_files_ccsds_ndm_odm_ocm_Perturbations_H
#define org_orekit_files_ccsds_ndm_odm_ocm_Perturbations_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {
          class BodyFacade;
        }
        namespace ndm {
          namespace odm {
            namespace ocm {
              class ShadowModel;
            }
          }
        }
      }
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace bodies {
      class CelestialBodies;
    }
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

              class Perturbations : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_6fb41d4bb0f65842,
                  mid_getAlbedoGridSize_570ce0828f81a2c1,
                  mid_getAlbedoModel_11b109bd155ca898,
                  mid_getAtmosphericModel_11b109bd155ca898,
                  mid_getCentralBodyRotation_dff5885c2c873297,
                  mid_getEquatorialRadius_dff5885c2c873297,
                  mid_getFixedF10P7_dff5885c2c873297,
                  mid_getFixedF10P7Mean_dff5885c2c873297,
                  mid_getFixedGeomagneticAp_dff5885c2c873297,
                  mid_getFixedGeomagneticDst_dff5885c2c873297,
                  mid_getFixedGeomagneticKp_dff5885c2c873297,
                  mid_getFixedM10P7_dff5885c2c873297,
                  mid_getFixedM10P7Mean_dff5885c2c873297,
                  mid_getFixedS10P7_dff5885c2c873297,
                  mid_getFixedS10P7Mean_dff5885c2c873297,
                  mid_getFixedY10P7_dff5885c2c873297,
                  mid_getFixedY10P7Mean_dff5885c2c873297,
                  mid_getGm_dff5885c2c873297,
                  mid_getGravityDegree_570ce0828f81a2c1,
                  mid_getGravityModel_11b109bd155ca898,
                  mid_getGravityOrder_570ce0828f81a2c1,
                  mid_getInterpMethodSW_11b109bd155ca898,
                  mid_getNBodyPerturbations_2afa36052df4765d,
                  mid_getOblateFlattening_dff5885c2c873297,
                  mid_getOceanTidesModel_11b109bd155ca898,
                  mid_getReductionTheory_11b109bd155ca898,
                  mid_getShadowBodies_2afa36052df4765d,
                  mid_getShadowModel_e596dcc96215ef0a,
                  mid_getSolidTidesModel_11b109bd155ca898,
                  mid_getSpaceWeatherEpoch_85703d13e302437e,
                  mid_getSpaceWeatherSource_11b109bd155ca898,
                  mid_getSrpModel_11b109bd155ca898,
                  mid_setAlbedoGridSize_99803b0791f320ff,
                  mid_setAlbedoModel_d0bc48d5b00dc40c,
                  mid_setAtmosphericModel_d0bc48d5b00dc40c,
                  mid_setCentralBodyRotation_17db3a65980d3441,
                  mid_setEquatorialRadius_17db3a65980d3441,
                  mid_setFixedF10P7_17db3a65980d3441,
                  mid_setFixedF10P7Mean_17db3a65980d3441,
                  mid_setFixedGeomagneticAp_17db3a65980d3441,
                  mid_setFixedGeomagneticDst_17db3a65980d3441,
                  mid_setFixedGeomagneticKp_17db3a65980d3441,
                  mid_setFixedM10P7_17db3a65980d3441,
                  mid_setFixedM10P7Mean_17db3a65980d3441,
                  mid_setFixedS10P7_17db3a65980d3441,
                  mid_setFixedS10P7Mean_17db3a65980d3441,
                  mid_setFixedY10P7_17db3a65980d3441,
                  mid_setFixedY10P7Mean_17db3a65980d3441,
                  mid_setGm_17db3a65980d3441,
                  mid_setGravityModel_04eb5531e9227c93,
                  mid_setInterpMethodSW_d0bc48d5b00dc40c,
                  mid_setNBodyPerturbations_de3e021e7266b71e,
                  mid_setOblateFlattening_17db3a65980d3441,
                  mid_setOceanTidesModel_d0bc48d5b00dc40c,
                  mid_setReductionTheory_d0bc48d5b00dc40c,
                  mid_setShadowBodies_de3e021e7266b71e,
                  mid_setShadowModel_d9822cf38c494ae7,
                  mid_setSolidTidesModel_d0bc48d5b00dc40c,
                  mid_setSpaceWeatherEpoch_600a2a61652bc473,
                  mid_setSpaceWeatherSource_d0bc48d5b00dc40c,
                  mid_setSrpModel_d0bc48d5b00dc40c,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit Perturbations(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                Perturbations(const Perturbations& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                Perturbations(const ::org::orekit::bodies::CelestialBodies &);

                jint getAlbedoGridSize() const;
                ::java::lang::String getAlbedoModel() const;
                ::java::lang::String getAtmosphericModel() const;
                jdouble getCentralBodyRotation() const;
                jdouble getEquatorialRadius() const;
                jdouble getFixedF10P7() const;
                jdouble getFixedF10P7Mean() const;
                jdouble getFixedGeomagneticAp() const;
                jdouble getFixedGeomagneticDst() const;
                jdouble getFixedGeomagneticKp() const;
                jdouble getFixedM10P7() const;
                jdouble getFixedM10P7Mean() const;
                jdouble getFixedS10P7() const;
                jdouble getFixedS10P7Mean() const;
                jdouble getFixedY10P7() const;
                jdouble getFixedY10P7Mean() const;
                jdouble getGm() const;
                jint getGravityDegree() const;
                ::java::lang::String getGravityModel() const;
                jint getGravityOrder() const;
                ::java::lang::String getInterpMethodSW() const;
                ::java::util::List getNBodyPerturbations() const;
                jdouble getOblateFlattening() const;
                ::java::lang::String getOceanTidesModel() const;
                ::java::lang::String getReductionTheory() const;
                ::java::util::List getShadowBodies() const;
                ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel getShadowModel() const;
                ::java::lang::String getSolidTidesModel() const;
                ::org::orekit::time::AbsoluteDate getSpaceWeatherEpoch() const;
                ::java::lang::String getSpaceWeatherSource() const;
                ::java::lang::String getSrpModel() const;
                void setAlbedoGridSize(jint) const;
                void setAlbedoModel(const ::java::lang::String &) const;
                void setAtmosphericModel(const ::java::lang::String &) const;
                void setCentralBodyRotation(jdouble) const;
                void setEquatorialRadius(jdouble) const;
                void setFixedF10P7(jdouble) const;
                void setFixedF10P7Mean(jdouble) const;
                void setFixedGeomagneticAp(jdouble) const;
                void setFixedGeomagneticDst(jdouble) const;
                void setFixedGeomagneticKp(jdouble) const;
                void setFixedM10P7(jdouble) const;
                void setFixedM10P7Mean(jdouble) const;
                void setFixedS10P7(jdouble) const;
                void setFixedS10P7Mean(jdouble) const;
                void setFixedY10P7(jdouble) const;
                void setFixedY10P7Mean(jdouble) const;
                void setGm(jdouble) const;
                void setGravityModel(const ::java::lang::String &, jint, jint) const;
                void setInterpMethodSW(const ::java::lang::String &) const;
                void setNBodyPerturbations(const ::java::util::List &) const;
                void setOblateFlattening(jdouble) const;
                void setOceanTidesModel(const ::java::lang::String &) const;
                void setReductionTheory(const ::java::lang::String &) const;
                void setShadowBodies(const ::java::util::List &) const;
                void setShadowModel(const ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel &) const;
                void setSolidTidesModel(const ::java::lang::String &) const;
                void setSpaceWeatherEpoch(const ::org::orekit::time::AbsoluteDate &) const;
                void setSpaceWeatherSource(const ::java::lang::String &) const;
                void setSrpModel(const ::java::lang::String &) const;
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
              extern PyType_Def PY_TYPE_DEF(Perturbations);
              extern PyTypeObject *PY_TYPE(Perturbations);

              class t_Perturbations {
              public:
                PyObject_HEAD
                Perturbations object;
                static PyObject *wrap_Object(const Perturbations&);
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
