#ifndef org_orekit_files_sinex_SinexEopEntry_H
#define org_orekit_files_sinex_SinexEopEntry_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace frames {
      class EOPEntry;
      class ITRFVersion;
    }
    namespace time {
      class AbsoluteDate;
      class TimeStamped;
      class TimeScale;
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
            mid_init$_600a2a61652bc473,
            mid_getDate_85703d13e302437e,
            mid_getLod_dff5885c2c873297,
            mid_getNutLn_dff5885c2c873297,
            mid_getNutOb_dff5885c2c873297,
            mid_getNutX_dff5885c2c873297,
            mid_getNutY_dff5885c2c873297,
            mid_getUt1MinusUtc_dff5885c2c873297,
            mid_getXPo_dff5885c2c873297,
            mid_getYPo_dff5885c2c873297,
            mid_setLod_17db3a65980d3441,
            mid_setNutLn_17db3a65980d3441,
            mid_setNutOb_17db3a65980d3441,
            mid_setNutX_17db3a65980d3441,
            mid_setNutY_17db3a65980d3441,
            mid_setUt1MinusUtc_17db3a65980d3441,
            mid_setxPo_17db3a65980d3441,
            mid_setyPo_17db3a65980d3441,
            mid_toEopEntry_70a1abaf98a061db,
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
