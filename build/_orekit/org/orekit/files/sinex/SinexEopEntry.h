#ifndef org_orekit_files_sinex_SinexEopEntry_H
#define org_orekit_files_sinex_SinexEopEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class TimeStamped;
      class AbsoluteDate;
      class TimeScale;
    }
    namespace frames {
      class EOPEntry;
      class ITRFVersion;
    }
    namespace utils {
      class IERSConventions$NutationCorrectionConverter;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        class SinexEopEntry : public ::java::lang::Object {
         public:
          enum {
            mid_init$_8497861b879c83f7,
            mid_getDate_80e11148db499dda,
            mid_getLod_9981f74b2d109da6,
            mid_getNutLn_9981f74b2d109da6,
            mid_getNutOb_9981f74b2d109da6,
            mid_getNutX_9981f74b2d109da6,
            mid_getNutY_9981f74b2d109da6,
            mid_getUt1MinusUtc_9981f74b2d109da6,
            mid_getXPo_9981f74b2d109da6,
            mid_getYPo_9981f74b2d109da6,
            mid_setLod_1ad26e8c8c0cd65b,
            mid_setNutLn_1ad26e8c8c0cd65b,
            mid_setNutOb_1ad26e8c8c0cd65b,
            mid_setNutX_1ad26e8c8c0cd65b,
            mid_setNutY_1ad26e8c8c0cd65b,
            mid_setUt1MinusUtc_1ad26e8c8c0cd65b,
            mid_setxPo_1ad26e8c8c0cd65b,
            mid_setyPo_1ad26e8c8c0cd65b,
            mid_toEopEntry_77d96af09a23fcc3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SinexEopEntry(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SinexEopEntry(const SinexEopEntry& obj) : ::java::lang::Object(obj) {}

          SinexEopEntry(const ::org::orekit::time::AbsoluteDate &);

          ::org::orekit::time::AbsoluteDate getDate() const;
          jdouble getLod() const;
          jdouble getNutLn() const;
          jdouble getNutOb() const;
          jdouble getNutX() const;
          jdouble getNutY() const;
          jdouble getUt1MinusUtc() const;
          jdouble getXPo() const;
          jdouble getYPo() const;
          void setLod(jdouble) const;
          void setNutLn(jdouble) const;
          void setNutOb(jdouble) const;
          void setNutX(jdouble) const;
          void setNutY(jdouble) const;
          void setUt1MinusUtc(jdouble) const;
          void setxPo(jdouble) const;
          void setyPo(jdouble) const;
          ::org::orekit::frames::EOPEntry toEopEntry(const ::org::orekit::utils::IERSConventions$NutationCorrectionConverter &, const ::org::orekit::frames::ITRFVersion &, const ::org::orekit::time::TimeScale &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {
        extern PyType_Def PY_TYPE_DEF(SinexEopEntry);
        extern PyTypeObject *PY_TYPE(SinexEopEntry);

        class t_SinexEopEntry {
        public:
          PyObject_HEAD
          SinexEopEntry object;
          static PyObject *wrap_Object(const SinexEopEntry&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
