#ifndef org_hipparchus_geometry_VectorFormat_H
#define org_hipparchus_geometry_VectorFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class ParsePosition;
    class NumberFormat;
    class FieldPosition;
  }
  namespace util {
    class Locale;
  }
  namespace lang {
    class Class;
    class StringBuffer;
    class String;
  }
}
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
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {

      class VectorFormat : public ::java::lang::Object {
       public:
        enum {
          mid_format_fbc9c473747e1713,
          mid_format_6f1f6993f3124ea0,
          mid_getAvailableLocales_85ff0d07ca843902,
          mid_getFormat_001645e916bd626d,
          mid_getPrefix_3cffd47377eca18a,
          mid_getSeparator_3cffd47377eca18a,
          mid_getSuffix_3cffd47377eca18a,
          mid_parse_7236b6f35bbe732b,
          mid_parse_a9ea402cd0957b38,
          mid_parseCoordinates_cb64af18199b2965,
          mid_format_fa4f8fe137c30573,
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
