#ifndef org_orekit_frames_ITRFVersion_H
#define org_orekit_frames_ITRFVersion_H

#include "java/lang/Enum.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class ITRFVersion$Converter;
      class ITRFVersion;
    }
    namespace time {
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class ITRFVersion : public ::java::lang::Enum {
       public:
        enum {
          mid_getConverter_ad1e76c5a5e62625,
          mid_getConverter_3ba4b02a32b22bb8,
          mid_getITRFVersion_031874fbc127eede,
          mid_getITRFVersion_611a84321ee92ece,
          mid_getLast_8bcdfad365f6d36a,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getYear_55546ef6a647f39b,
          mid_valueOf_031874fbc127eede,
          mid_values_764e284abbfef657,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit ITRFVersion(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        ITRFVersion(const ITRFVersion& obj) : ::java::lang::Enum(obj) {}

        static ITRFVersion *ITRF_1988;
        static ITRFVersion *ITRF_1989;
        static ITRFVersion *ITRF_1990;
        static ITRFVersion *ITRF_1991;
        static ITRFVersion *ITRF_1992;
        static ITRFVersion *ITRF_1993;
        static ITRFVersion *ITRF_1994;
        static ITRFVersion *ITRF_1996;
        static ITRFVersion *ITRF_1997;
        static ITRFVersion *ITRF_2000;
        static ITRFVersion *ITRF_2005;
        static ITRFVersion *ITRF_2008;
        static ITRFVersion *ITRF_2014;
        static ITRFVersion *ITRF_2020;

        static ::org::orekit::frames::ITRFVersion$Converter getConverter(const ITRFVersion &, const ITRFVersion &);
        static ::org::orekit::frames::ITRFVersion$Converter getConverter(const ITRFVersion &, const ITRFVersion &, const ::org::orekit::time::TimeScale &);
        static ITRFVersion getITRFVersion(const ::java::lang::String &);
        static ITRFVersion getITRFVersion(jint);
        static ITRFVersion getLast();
        ::java::lang::String getName() const;
        jint getYear() const;
        static ITRFVersion valueOf(const ::java::lang::String &);
        static JArray< ITRFVersion > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(ITRFVersion);
      extern PyTypeObject *PY_TYPE(ITRFVersion);

      class t_ITRFVersion {
      public:
        PyObject_HEAD
        ITRFVersion object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_ITRFVersion *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const ITRFVersion&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const ITRFVersion&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
