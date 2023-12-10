#ifndef org_orekit_files_rinex_navigation_RinexNavigationHeader_H
#define org_orekit_files_rinex_navigation_RinexNavigationHeader_H

#include "org/orekit/files/rinex/section/RinexBaseHeader.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {
          class IonosphericCorrectionType;
          class TimeSystemCorrection;
        }
      }
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
              mid_init$_7ae3461a92a43152,
              mid_addTimeSystemCorrections_e54a1e148bff5dcc,
              mid_getIonosphericCorrectionType_e11d73f275e631f2,
              mid_getMergedFiles_f2f64475e4580546,
              mid_getNumberOfLeapSeconds_f2f64475e4580546,
              mid_getTimeSystemCorrections_a6156df500549a58,
              mid_setIonosphericCorrectionType_412ac69d75a7d1b5,
              mid_setMergedFiles_0a2a1ac2721c0336,
              mid_setNumberOfLeapSeconds_0a2a1ac2721c0336,
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
