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
                  mid_init$_7ae3461a92a43152,
                  mid_getAGoM_456d9a2f64d6b28d,
                  mid_getBStar_456d9a2f64d6b28d,
                  mid_getBTerm_456d9a2f64d6b28d,
                  mid_getClassificationType_29e026b9d068f1c7,
                  mid_getElementSetNumber_f2f64475e4580546,
                  mid_getEphemerisType_f2f64475e4580546,
                  mid_getMeanMotionDot_456d9a2f64d6b28d,
                  mid_getMeanMotionDotDot_456d9a2f64d6b28d,
                  mid_getNoradID_f2f64475e4580546,
                  mid_getRevAtEpoch_f2f64475e4580546,
                  mid_setAGoM_77e0f9a1f260e2e5,
                  mid_setBStar_77e0f9a1f260e2e5,
                  mid_setBTerm_77e0f9a1f260e2e5,
                  mid_setClassificationType_be0046d7f7239695,
                  mid_setElementSetNo_0a2a1ac2721c0336,
                  mid_setEphemerisType_0a2a1ac2721c0336,
                  mid_setMeanMotionDot_77e0f9a1f260e2e5,
                  mid_setMeanMotionDotDot_77e0f9a1f260e2e5,
                  mid_setNoradID_0a2a1ac2721c0336,
                  mid_setRevAtEpoch_0a2a1ac2721c0336,
                  mid_validate_77e0f9a1f260e2e5,
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
