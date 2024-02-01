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
                mid_init$_ff7cb6c242604316,
                mid_getDcpSensitivityVectorPosition_be783177b060994b,
                mid_getDcpSensitivityVectorVelocity_be783177b060994b,
                mid_getDensityForecastUncertainty_9981f74b2d109da6,
                mid_getScreeningDataSource_d2c8eb4129821f0e,
                mid_getcScaleFactor_9981f74b2d109da6,
                mid_getcScaleFactorMax_9981f74b2d109da6,
                mid_getcScaleFactorMin_9981f74b2d109da6,
                mid_setDcpSensitivityVectorPosition_a71c45509eaf92d1,
                mid_setDcpSensitivityVectorVelocity_a71c45509eaf92d1,
                mid_setDensityForecastUncertainty_1ad26e8c8c0cd65b,
                mid_setScreeningDataSource_105e1eadb709d9ac,
                mid_setcScaleFactor_1ad26e8c8c0cd65b,
                mid_setcScaleFactorMax_1ad26e8c8c0cd65b,
                mid_setcScaleFactorMin_1ad26e8c8c0cd65b,
                mid_validate_1ad26e8c8c0cd65b,
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
