#ifndef org_orekit_files_ccsds_ndm_cdm_AdditionalCovarianceMetadata_H
#define org_orekit_files_ccsds_ndm_cdm_AdditionalCovarianceMetadata_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            class AdditionalCovarianceMetadata : public ::org::orekit::files::ccsds::section::CommentsContainer {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_getDcpSensitivityVectorPosition_a53a7513ecedada2,
                mid_getDcpSensitivityVectorVelocity_a53a7513ecedada2,
                mid_getDensityForecastUncertainty_557b8123390d8d0c,
                mid_getScreeningDataSource_3cffd47377eca18a,
                mid_getcScaleFactor_557b8123390d8d0c,
                mid_getcScaleFactorMax_557b8123390d8d0c,
                mid_getcScaleFactorMin_557b8123390d8d0c,
                mid_setDcpSensitivityVectorPosition_cc18240f4a737f14,
                mid_setDcpSensitivityVectorVelocity_cc18240f4a737f14,
                mid_setDensityForecastUncertainty_10f281d777284cea,
                mid_setScreeningDataSource_f5ffdf29129ef90a,
                mid_setcScaleFactor_10f281d777284cea,
                mid_setcScaleFactorMax_10f281d777284cea,
                mid_setcScaleFactorMin_10f281d777284cea,
                mid_validate_10f281d777284cea,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit AdditionalCovarianceMetadata(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              AdditionalCovarianceMetadata(const AdditionalCovarianceMetadata& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

              AdditionalCovarianceMetadata();

              JArray< jdouble > getDcpSensitivityVectorPosition() const;
              JArray< jdouble > getDcpSensitivityVectorVelocity() const;
              jdouble getDensityForecastUncertainty() const;
              ::java::lang::String getScreeningDataSource() const;
              jdouble getcScaleFactor() const;
              jdouble getcScaleFactorMax() const;
              jdouble getcScaleFactorMin() const;
              void setDcpSensitivityVectorPosition(const JArray< jdouble > &) const;
              void setDcpSensitivityVectorVelocity(const JArray< jdouble > &) const;
              void setDensityForecastUncertainty(jdouble) const;
              void setScreeningDataSource(const ::java::lang::String &) const;
              void setcScaleFactor(jdouble) const;
              void setcScaleFactorMax(jdouble) const;
              void setcScaleFactorMin(jdouble) const;
              void validate(jdouble) const;
            };
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
          namespace cdm {
            extern PyType_Def PY_TYPE_DEF(AdditionalCovarianceMetadata);
            extern PyTypeObject *PY_TYPE(AdditionalCovarianceMetadata);

            class t_AdditionalCovarianceMetadata {
            public:
              PyObject_HEAD
              AdditionalCovarianceMetadata object;
              static PyObject *wrap_Object(const AdditionalCovarianceMetadata&);
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

#endif
