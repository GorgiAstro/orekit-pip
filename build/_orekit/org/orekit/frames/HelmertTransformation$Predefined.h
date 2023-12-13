#ifndef org_orekit_frames_HelmertTransformation$Predefined_H
#define org_orekit_frames_HelmertTransformation$Predefined_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace frames {
      class HelmertTransformation$Predefined;
      class Frame;
      class HelmertTransformation;
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

      class HelmertTransformation$Predefined : public ::java::lang::Enum {
       public:
        enum {
          mid_createTransformedITRF_fcaa873d7a925322,
          mid_createTransformedITRF_eec78388a944cd82,
          mid_getDestination_8bcdfad365f6d36a,
          mid_getOrigin_8bcdfad365f6d36a,
          mid_getTransformation_c35844ad436bf6ad,
          mid_getTransformation_a7295ba5220485f5,
          mid_selectPredefined_3fe0e3a93eec16df,
          mid_valueOf_561b63cf182d7094,
          mid_values_585b558730d6c9b4,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit HelmertTransformation$Predefined(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        HelmertTransformation$Predefined(const HelmertTransformation$Predefined& obj) : ::java::lang::Enum(obj) {}

        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_1988;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_1989;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_1990;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_1991;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_1992;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_1993;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_1994;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_1996;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_1997;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_2000;
        static HelmertTransformation$Predefined *ITRF_2008_TO_ITRF_2005;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_1988;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_1989;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_1990;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_1991;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_1992;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_1993;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_1994;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_1996;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_1997;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_2000;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_2005;
        static HelmertTransformation$Predefined *ITRF_2014_TO_ITRF_2008;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_1988;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_1989;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_1990;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_1991;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_1992;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_1993;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_1994;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_1996;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_1997;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_2000;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_2005;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_2008;
        static HelmertTransformation$Predefined *ITRF_2020_TO_ITRF_2014;

        ::org::orekit::frames::Frame createTransformedITRF(const ::org::orekit::frames::Frame &, const ::java::lang::String &) const;
        ::org::orekit::frames::Frame createTransformedITRF(const ::org::orekit::frames::Frame &, const ::java::lang::String &, const ::org::orekit::time::TimeScale &) const;
        ::org::orekit::frames::ITRFVersion getDestination() const;
        ::org::orekit::frames::ITRFVersion getOrigin() const;
        ::org::orekit::frames::HelmertTransformation getTransformation() const;
        ::org::orekit::frames::HelmertTransformation getTransformation(const ::org::orekit::time::TimeScale &) const;
        static HelmertTransformation$Predefined selectPredefined(jint, jint);
        static HelmertTransformation$Predefined valueOf(const ::java::lang::String &);
        static JArray< HelmertTransformation$Predefined > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(HelmertTransformation$Predefined);
      extern PyTypeObject *PY_TYPE(HelmertTransformation$Predefined);

      class t_HelmertTransformation$Predefined {
      public:
        PyObject_HEAD
        HelmertTransformation$Predefined object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_HelmertTransformation$Predefined *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const HelmertTransformation$Predefined&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const HelmertTransformation$Predefined&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
