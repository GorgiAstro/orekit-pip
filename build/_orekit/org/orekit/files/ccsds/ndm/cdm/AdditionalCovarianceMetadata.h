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
                mid_init$_0fa09c18fee449d5,
                mid_getDcpSensitivityVectorPosition_60c7040667a7dc5c,
                mid_getDcpSensitivityVectorVelocity_60c7040667a7dc5c,
                mid_getDensityForecastUncertainty_dff5885c2c873297,
                mid_getScreeningDataSource_11b109bd155ca898,
                mid_getcScaleFactor_dff5885c2c873297,
                mid_getcScaleFactorMax_dff5885c2c873297,
                mid_getcScaleFactorMin_dff5885c2c873297,
                mid_setDcpSensitivityVectorPosition_fa9d415d19f69361,
                mid_setDcpSensitivityVectorVelocity_fa9d415d19f69361,
                mid_setDensityForecastUncertainty_17db3a65980d3441,
                mid_setScreeningDataSource_d0bc48d5b00dc40c,
                mid_setcScaleFactor_17db3a65980d3441,
                mid_setcScaleFactorMax_17db3a65980d3441,
                mid_setcScaleFactorMin_17db3a65980d3441,
                mid_validate_17db3a65980d3441,
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
