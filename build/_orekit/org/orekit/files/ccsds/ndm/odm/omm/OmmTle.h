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
                  mid_init$_a1fa5dae97ea5ed2,
                  mid_getAGoM_b74f83833fdad017,
                  mid_getBStar_b74f83833fdad017,
                  mid_getBTerm_b74f83833fdad017,
                  mid_getClassificationType_5e2f8fc4d7c03fbd,
                  mid_getElementSetNumber_55546ef6a647f39b,
                  mid_getEphemerisType_55546ef6a647f39b,
                  mid_getMeanMotionDot_b74f83833fdad017,
                  mid_getMeanMotionDotDot_b74f83833fdad017,
                  mid_getNoradID_55546ef6a647f39b,
                  mid_getRevAtEpoch_55546ef6a647f39b,
                  mid_setAGoM_8ba9fe7a847cecad,
                  mid_setBStar_8ba9fe7a847cecad,
                  mid_setBTerm_8ba9fe7a847cecad,
                  mid_setClassificationType_df95ad02f5b4acd9,
                  mid_setElementSetNo_44ed599e93e8a30c,
                  mid_setEphemerisType_44ed599e93e8a30c,
                  mid_setMeanMotionDot_8ba9fe7a847cecad,
                  mid_setMeanMotionDotDot_8ba9fe7a847cecad,
                  mid_setNoradID_44ed599e93e8a30c,
                  mid_setRevAtEpoch_44ed599e93e8a30c,
                  mid_validate_8ba9fe7a847cecad,
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
