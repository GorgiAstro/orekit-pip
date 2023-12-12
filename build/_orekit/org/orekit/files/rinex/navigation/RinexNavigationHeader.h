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
              mid_init$_0640e6acf969ed28,
              mid_addTimeSystemCorrections_c58230bb9bf03e26,
              mid_getIonosphericCorrectionType_274c47bda8a7356f,
              mid_getMergedFiles_412668abc8d889e9,
              mid_getNumberOfLeapSeconds_412668abc8d889e9,
              mid_getTimeSystemCorrections_0d9551367f7ecdef,
              mid_setIonosphericCorrectionType_2b2777839ed697bc,
              mid_setMergedFiles_a3da1a935cb37f7b,
              mid_setNumberOfLeapSeconds_a3da1a935cb37f7b,
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
