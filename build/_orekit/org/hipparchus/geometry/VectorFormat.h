#ifndef org_hipparchus_geometry_VectorFormat_H
#define org_hipparchus_geometry_VectorFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
    }
    namespace exception {
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace util {
    class Locale;
  }
  namespace text {
    class NumberFormat;
    class ParsePosition;
    class FieldPosition;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {

      class VectorFormat : public ::java::lang::Object {
       public:
        enum {
          mid_format_70cc35afc62a15a9,
          mid_format_84b38396c796d436,
          mid_getAvailableLocales_c5ed07ebd55821bb,
          mid_getFormat_24f83dea4a8657b1,
          mid_getPrefix_11b109bd155ca898,
          mid_getSeparator_11b109bd155ca898,
          mid_getSuffix_11b109bd155ca898,
          mid_parse_f2392149be71531b,
          mid_parse_57fa38b35ce1396f,
          mid_parseCoordinates_52c2f130524441eb,
          mid_format_e7b84a9e0bbb4322,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit VectorFormat(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        VectorFormat(const VectorFormat& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::String *DEFAULT_PREFIX;
        static ::java::lang::String *DEFAULT_SEPARATOR;
        static ::java::lang::String *DEFAULT_SUFFIX;

        ::java::lang::String format(const ::org::hipparchus::geometry::Vector &) const;
        ::java::lang::StringBuffer format(const ::org::hipparchus::geometry::Vector &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        static JArray< ::java::util::Locale > getAvailableLocales();
        ::java::text::NumberFormat getFormat() const;
        ::java::lang::String getPrefix() const;
        ::java::lang::String getSeparator() const;
        ::java::lang::String getSuffix() const;
        ::org::hipparchus::geometry::Vector parse(const ::java::lang::String &) const;
        ::org::hipparchus::geometry::Vector parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      extern PyType_Def PY_TYPE_DEF(VectorFormat);
      extern PyTypeObject *PY_TYPE(VectorFormat);

      class t_VectorFormat {
      public:
        PyObject_HEAD
        VectorFormat object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_VectorFormat *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const VectorFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const VectorFormat&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
