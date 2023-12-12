#ifndef org_orekit_frames_ITRFVersion_H
#define org_orekit_frames_ITRFVersion_H

#include "java/lang/Enum.h"

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
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace frames {

      class ITRFVersion : public ::java::lang::Enum {
       public:
        enum {
          mid_getConverter_f04aa79ffaaf8456,
          mid_getConverter_bfb6aef9f29793c0,
          mid_getITRFVersion_64feea1c8a442fcc,
          mid_getITRFVersion_fd623a781f8f379f,
          mid_getLast_b311296551ce8af2,
          mid_getName_3cffd47377eca18a,
          mid_getYear_412668abc8d889e9,
          mid_valueOf_64feea1c8a442fcc,
          mid_values_9eef3acac661cdfc,
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
