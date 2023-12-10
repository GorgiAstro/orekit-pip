#ifndef org_orekit_files_rinex_navigation_RinexNavigationHeader_H
#define org_orekit_files_rinex_navigation_RinexNavigationHeader_H

#include "org/orekit/files/rinex/section/RinexBaseHeader.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class TimeSystemCorrection;
          class IonosphericCorrectionType;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          class RinexNavigationHeader : public ::org::orekit::files::rinex::section::RinexBaseHeader {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_addTimeSystemCorrections_ccf19589f253278b,
              mid_getIonosphericCorrectionType_95784a81ac0ef776,
              mid_getMergedFiles_570ce0828f81a2c1,
              mid_getNumberOfLeapSeconds_570ce0828f81a2c1,
              mid_getTimeSystemCorrections_2afa36052df4765d,
              mid_setIonosphericCorrectionType_1ae8e31df7b1189a,
              mid_setMergedFiles_99803b0791f320ff,
              mid_setNumberOfLeapSeconds_99803b0791f320ff,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RinexNavigationHeader(jobject obj) : ::org::orekit::files::rinex::section::RinexBaseHeader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RinexNavigationHeader(const RinexNavigationHeader& obj) : ::org::orekit::files::rinex::section::RinexBaseHeader(obj) {}

            RinexNavigationHeader();

            void addTimeSystemCorrections(const ::org::orekit::files::rinex::navigation::TimeSystemCorrection &) const;
            ::org::orekit::files::rinex::navigation::IonosphericCorrectionType getIonosphericCorrectionType() const;
            jint getMergedFiles() const;
            jint getNumberOfLeapSeconds() const;
            ::java::util::List getTimeSystemCorrections() const;
            void setIonosphericCorrectionType(const ::org::orekit::files::rinex::navigation::IonosphericCorrectionType &) const;
            void setMergedFiles(jint) const;
            void setNumberOfLeapSeconds(jint) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          extern PyType_Def PY_TYPE_DEF(RinexNavigationHeader);
          extern PyTypeObject *PY_TYPE(RinexNavigationHeader);

          class t_RinexNavigationHeader {
          public:
            PyObject_HEAD
            RinexNavigationHeader object;
            static PyObject *wrap_Object(const RinexNavigationHeader&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
