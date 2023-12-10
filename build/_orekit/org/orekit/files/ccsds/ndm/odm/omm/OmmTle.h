#ifndef org_orekit_files_ccsds_ndm_odm_omm_OmmTle_H
#define org_orekit_files_ccsds_ndm_odm_omm_OmmTle_H

#include "org/orekit/files/ccsds/section/CommentsContainer.h"

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
          namespace odm {
            namespace omm {

              class OmmTle : public ::org::orekit::files::ccsds::section::CommentsContainer {
               public:
                enum {
                  mid_init$_0fa09c18fee449d5,
                  mid_getAGoM_dff5885c2c873297,
                  mid_getBStar_dff5885c2c873297,
                  mid_getBTerm_dff5885c2c873297,
                  mid_getClassificationType_7818f5b58320cd1f,
                  mid_getElementSetNumber_570ce0828f81a2c1,
                  mid_getEphemerisType_570ce0828f81a2c1,
                  mid_getMeanMotionDot_dff5885c2c873297,
                  mid_getMeanMotionDotDot_dff5885c2c873297,
                  mid_getNoradID_570ce0828f81a2c1,
                  mid_getRevAtEpoch_570ce0828f81a2c1,
                  mid_setAGoM_17db3a65980d3441,
                  mid_setBStar_17db3a65980d3441,
                  mid_setBTerm_17db3a65980d3441,
                  mid_setClassificationType_636c0bbb96cab723,
                  mid_setElementSetNo_99803b0791f320ff,
                  mid_setEphemerisType_99803b0791f320ff,
                  mid_setMeanMotionDot_17db3a65980d3441,
                  mid_setMeanMotionDotDot_17db3a65980d3441,
                  mid_setNoradID_99803b0791f320ff,
                  mid_setRevAtEpoch_99803b0791f320ff,
                  mid_validate_17db3a65980d3441,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit OmmTle(jobject obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                OmmTle(const OmmTle& obj) : ::org::orekit::files::ccsds::section::CommentsContainer(obj) {}

                static jint EPHEMERIS_TYPE_PPT3;
                static jint EPHEMERIS_TYPE_SGP;
                static jint EPHEMERIS_TYPE_SGP4;
                static jint EPHEMERIS_TYPE_SGP4_XP;
                static jint EPHEMERIS_TYPE_SPECIAL_PERTURBATIONS;

                OmmTle();

                jdouble getAGoM() const;
                jdouble getBStar() const;
                jdouble getBTerm() const;
                jchar getClassificationType() const;
                jint getElementSetNumber() const;
                jint getEphemerisType() const;
                jdouble getMeanMotionDot() const;
                jdouble getMeanMotionDotDot() const;
                jint getNoradID() const;
                jint getRevAtEpoch() const;
                void setAGoM(jdouble) const;
                void setBStar(jdouble) const;
                void setBTerm(jdouble) const;
                void setClassificationType(jchar) const;
                void setElementSetNo(jint) const;
                void setEphemerisType(jint) const;
                void setMeanMotionDot(jdouble) const;
                void setMeanMotionDotDot(jdouble) const;
                void setNoradID(jint) const;
                void setRevAtEpoch(jint) const;
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
          namespace odm {
            namespace omm {
              extern PyType_Def PY_TYPE_DEF(OmmTle);
              extern PyTypeObject *PY_TYPE(OmmTle);

              class t_OmmTle {
              public:
                PyObject_HEAD
                OmmTle object;
                static PyObject *wrap_Object(const OmmTle&);
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
