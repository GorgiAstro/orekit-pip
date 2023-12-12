#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldContinuedFraction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldContinuedFraction::class$ = NULL;
      jmethodID *FieldContinuedFraction::mids$ = NULL;
      bool FieldContinuedFraction::live$ = false;

      jclass FieldContinuedFraction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldContinuedFraction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_evaluate_6672ad854985cb64] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_0c85c14ef225acd0] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;D)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_a945230069a4182c] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;I)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_evaluate_600546fd77bd344c] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getA_d7f69d00c9b191e9] = env->getMethodID(cls, "getA", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getB_d7f69d00c9b191e9] = env->getMethodID(cls, "getB", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_6672ad854985cb64], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_0c85c14ef225acd0], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jint a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_a945230069a4182c], a0.this$, a1));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::evaluate(const ::org::hipparchus::CalculusFieldElement & a0, jdouble a1, jint a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_600546fd77bd344c], a0.this$, a1, a2));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getA(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_d7f69d00c9b191e9], a0, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldContinuedFraction::getB(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getB_d7f69d00c9b191e9], a0, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args);
      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args);

      static PyMethodDef t_FieldContinuedFraction__methods_[] = {
        DECLARE_METHOD(t_FieldContinuedFraction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldContinuedFraction, evaluate, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldContinuedFraction, getB, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldContinuedFraction)[] = {
        { Py_tp_methods, t_FieldContinuedFraction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldContinuedFraction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldContinuedFraction, t_FieldContinuedFraction, FieldContinuedFraction);

      void t_FieldContinuedFraction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldContinuedFraction), &PY_TYPE_DEF(FieldContinuedFraction), module, "FieldContinuedFraction", 0);
      }

      void t_FieldContinuedFraction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "class_", make_descriptor(FieldContinuedFraction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "wrapfn_", make_descriptor(t_FieldContinuedFraction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldContinuedFraction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldContinuedFraction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldContinuedFraction::initializeClass, 1)))
          return NULL;
        return t_FieldContinuedFraction::wrap_Object(FieldContinuedFraction(((t_FieldContinuedFraction *) arg)->object.this$));
      }
      static PyObject *t_FieldContinuedFraction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldContinuedFraction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldContinuedFraction_evaluate(t_FieldContinuedFraction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.evaluate(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KDI", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "evaluate", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getA(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getA(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getA", args);
        return NULL;
      }

      static PyObject *t_FieldContinuedFraction_getB(t_FieldContinuedFraction *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getB(a0, a1));
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getB", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "org/orekit/data/PoissonSeriesParser.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/PoissonSeries.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeriesParser::class$ = NULL;
      jmethodID *PoissonSeriesParser::mids$ = NULL;
      bool PoissonSeriesParser::live$ = false;

      jclass PoissonSeriesParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeriesParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_parse_7bc0c72c38f7f723] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;Ljava/lang/String;)Lorg/orekit/data/PoissonSeries;");
          mids$[mid_withDoodson_26b8a2a75a89e12b] = env->getMethodID(cls, "withDoodson", "(II)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstDelaunay_2098ad57f676ba38] = env->getMethodID(cls, "withFirstDelaunay", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withFirstPlanetary_2098ad57f676ba38] = env->getMethodID(cls, "withFirstPlanetary", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withGamma_2098ad57f676ba38] = env->getMethodID(cls, "withGamma", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withOptionalColumn_2098ad57f676ba38] = env->getMethodID(cls, "withOptionalColumn", "(I)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withPolynomialPart_fc61e1684ac4d72c] = env->getMethodID(cls, "withPolynomialPart", "(CLorg/orekit/data/PolynomialParser$Unit;)Lorg/orekit/data/PoissonSeriesParser;");
          mids$[mid_withSinCos_12c525c604f68c4f] = env->getMethodID(cls, "withSinCos", "(IIDID)Lorg/orekit/data/PoissonSeriesParser;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PoissonSeriesParser::PoissonSeriesParser(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      ::org::orekit::data::PoissonSeries PoissonSeriesParser::parse(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        return ::org::orekit::data::PoissonSeries(env->callObjectMethod(this$, mids$[mid_parse_7bc0c72c38f7f723], a0.this$, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withDoodson(jint a0, jint a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withDoodson_26b8a2a75a89e12b], a0, a1));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstDelaunay(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstDelaunay_2098ad57f676ba38], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withFirstPlanetary(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withFirstPlanetary_2098ad57f676ba38], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withGamma(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withGamma_2098ad57f676ba38], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withOptionalColumn(jint a0) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withOptionalColumn_2098ad57f676ba38], a0));
      }

      PoissonSeriesParser PoissonSeriesParser::withPolynomialPart(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withPolynomialPart_fc61e1684ac4d72c], a0, a1.this$));
      }

      PoissonSeriesParser PoissonSeriesParser::withSinCos(jint a0, jint a1, jdouble a2, jint a3, jdouble a4) const
      {
        return PoissonSeriesParser(env->callObjectMethod(this$, mids$[mid_withSinCos_12c525c604f68c4f], a0, a1, a2, a3, a4));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg);
      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args);
      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args);

      static PyMethodDef t_PoissonSeriesParser__methods_[] = {
        DECLARE_METHOD(t_PoissonSeriesParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeriesParser, parse, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withDoodson, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstDelaunay, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withFirstPlanetary, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withGamma, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withOptionalColumn, METH_O),
        DECLARE_METHOD(t_PoissonSeriesParser, withPolynomialPart, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeriesParser, withSinCos, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeriesParser)[] = {
        { Py_tp_methods, t_PoissonSeriesParser__methods_ },
        { Py_tp_init, (void *) t_PoissonSeriesParser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeriesParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeriesParser, t_PoissonSeriesParser, PoissonSeriesParser);

      void t_PoissonSeriesParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeriesParser), &PY_TYPE_DEF(PoissonSeriesParser), module, "PoissonSeriesParser", 0);
      }

      void t_PoissonSeriesParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "class_", make_descriptor(PoissonSeriesParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "wrapfn_", make_descriptor(t_PoissonSeriesParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeriesParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeriesParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeriesParser::initializeClass, 1)))
          return NULL;
        return t_PoissonSeriesParser::wrap_Object(PoissonSeriesParser(((t_PoissonSeriesParser *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeriesParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeriesParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PoissonSeriesParser_init_(t_PoissonSeriesParser *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        PoissonSeriesParser object((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          INT_CALL(object = PoissonSeriesParser(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PoissonSeriesParser_parse(t_PoissonSeriesParser *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        ::org::orekit::data::PoissonSeries result((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::orekit::data::t_PoissonSeries::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withDoodson(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.withDoodson(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withDoodson", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstDelaunay(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstDelaunay(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstDelaunay", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withFirstPlanetary(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withFirstPlanetary(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withFirstPlanetary", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withGamma(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withGamma(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withGamma", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withOptionalColumn(t_PoissonSeriesParser *self, PyObject *arg)
      {
        jint a0;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withOptionalColumn(a0));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withOptionalColumn", arg);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withPolynomialPart(t_PoissonSeriesParser *self, PyObject *args)
      {
        jchar a0;
        ::org::orekit::data::PolynomialParser$Unit a1((jobject) NULL);
        PyTypeObject **p1;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "CK", ::org::orekit::data::PolynomialParser$Unit::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_PolynomialParser$Unit::parameters_))
        {
          OBJ_CALL(result = self->object.withPolynomialPart(a0, a1));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withPolynomialPart", args);
        return NULL;
      }

      static PyObject *t_PoissonSeriesParser_withSinCos(t_PoissonSeriesParser *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jint a3;
        jdouble a4;
        PoissonSeriesParser result((jobject) NULL);

        if (!parseArgs(args, "IIDID", &a0, &a1, &a2, &a3, &a4))
        {
          OBJ_CALL(result = self->object.withSinCos(a0, a1, a2, a3, a4));
          return t_PoissonSeriesParser::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withSinCos", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/NormalDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NormalDistribution::class$ = NULL;
        jmethodID *NormalDistribution::mids$ = NULL;
        bool NormalDistribution::live$ = false;

        jclass NormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getMean_557b8123390d8d0c] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getStandardDeviation_557b8123390d8d0c] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");
            mids$[mid_probability_2268d18be49a6087] = env->getMethodID(cls, "probability", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NormalDistribution::NormalDistribution() : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        NormalDistribution::NormalDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble NormalDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble NormalDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble NormalDistribution::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_557b8123390d8d0c]);
        }

        jdouble NormalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble NormalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble NormalDistribution::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_557b8123390d8d0c]);
        }

        jdouble NormalDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble NormalDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jdouble NormalDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_7e960cd6eee376d8], a0);
        }

        jboolean NormalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble NormalDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
        }

        jdouble NormalDistribution::probability(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_2268d18be49a6087], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self);
        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args);
        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data);
        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data);
        static PyGetSetDef t_NormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NormalDistribution, mean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NormalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NormalDistribution, standardDeviation),
          DECLARE_GET_FIELD(t_NormalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NormalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NormalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NormalDistribution__methods_[] = {
          DECLARE_METHOD(t_NormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NormalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getMean, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, logDensity, METH_VARARGS),
          DECLARE_METHOD(t_NormalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NormalDistribution)[] = {
          { Py_tp_methods, t_NormalDistribution__methods_ },
          { Py_tp_init, (void *) t_NormalDistribution_init_ },
          { Py_tp_getset, t_NormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NormalDistribution, t_NormalDistribution, NormalDistribution);

        void t_NormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NormalDistribution), &PY_TYPE_DEF(NormalDistribution), module, "NormalDistribution", 0);
        }

        void t_NormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "class_", make_descriptor(NormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "wrapfn_", make_descriptor(t_NormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NormalDistribution::initializeClass, 1)))
            return NULL;
          return t_NormalDistribution::wrap_Object(NormalDistribution(((t_NormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_NormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NormalDistribution_init_(t_NormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              NormalDistribution object((jobject) NULL);

              INT_CALL(object = NormalDistribution());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NormalDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NormalDistribution_cumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_density(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NormalDistribution_getMean(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getNumericalMean(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NormalDistribution_getNumericalVariance(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NormalDistribution_getStandardDeviation(t_NormalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NormalDistribution_getSupportLowerBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NormalDistribution_getSupportUpperBound(t_NormalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NormalDistribution_inverseCumulativeProbability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_NormalDistribution_isSupportConnected(t_NormalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NormalDistribution_logDensity(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_NormalDistribution_probability(t_NormalDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NormalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_NormalDistribution_get__mean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalMean(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__numericalVariance(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__standardDeviation(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportConnected(t_NormalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NormalDistribution_get__supportLowerBound(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NormalDistribution_get__supportUpperBound(t_NormalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$AnglesMeasurement::class$ = NULL;
        jmethodID *CRD$AnglesMeasurement::mids$ = NULL;
        bool CRD$AnglesMeasurement::live$ = false;

        jclass CRD$AnglesMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$AnglesMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_60b7d33d13f2b96c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDIIZDD)V");
            mids$[mid_getAzimuth_557b8123390d8d0c] = env->getMethodID(cls, "getAzimuth", "()D");
            mids$[mid_getAzimuthRate_557b8123390d8d0c] = env->getMethodID(cls, "getAzimuthRate", "()D");
            mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDirectionFlag_412668abc8d889e9] = env->getMethodID(cls, "getDirectionFlag", "()I");
            mids$[mid_getElevation_557b8123390d8d0c] = env->getMethodID(cls, "getElevation", "()D");
            mids$[mid_getElevationRate_557b8123390d8d0c] = env->getMethodID(cls, "getElevationRate", "()D");
            mids$[mid_getOriginIndicator_412668abc8d889e9] = env->getMethodID(cls, "getOriginIndicator", "()I");
            mids$[mid_isRefractionCorrected_89b302893bdbe1f1] = env->getMethodID(cls, "isRefractionCorrected", "()Z");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$AnglesMeasurement::CRD$AnglesMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jint a3, jint a4, jboolean a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_60b7d33d13f2b96c, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        jdouble CRD$AnglesMeasurement::getAzimuth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuth_557b8123390d8d0c]);
        }

        jdouble CRD$AnglesMeasurement::getAzimuthRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuthRate_557b8123390d8d0c]);
        }

        ::org::orekit::time::AbsoluteDate CRD$AnglesMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
        }

        jint CRD$AnglesMeasurement::getDirectionFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDirectionFlag_412668abc8d889e9]);
        }

        jdouble CRD$AnglesMeasurement::getElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_557b8123390d8d0c]);
        }

        jdouble CRD$AnglesMeasurement::getElevationRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationRate_557b8123390d8d0c]);
        }

        jint CRD$AnglesMeasurement::getOriginIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginIndicator_412668abc8d889e9]);
        }

        jboolean CRD$AnglesMeasurement::isRefractionCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRefractionCorrected_89b302893bdbe1f1]);
        }

        ::java::lang::String CRD$AnglesMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRD$AnglesMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD$AnglesMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$AnglesMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$AnglesMeasurement_init_(t_CRD$AnglesMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$AnglesMeasurement_getAzimuth(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getAzimuthRate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getDate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getDirectionFlag(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getElevation(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getElevationRate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getOriginIndicator(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_isRefractionCorrected(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_toCrdString(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_toString(t_CRD$AnglesMeasurement *self, PyObject *args);
        static PyObject *t_CRD$AnglesMeasurement_get__azimuth(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__azimuthRate(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__date(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__directionFlag(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__elevation(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__elevationRate(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__originIndicator(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__refractionCorrected(t_CRD$AnglesMeasurement *self, void *data);
        static PyGetSetDef t_CRD$AnglesMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, azimuth),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, azimuthRate),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, directionFlag),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, elevation),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, elevationRate),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, originIndicator),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, refractionCorrected),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$AnglesMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$AnglesMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getAzimuth, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getAzimuthRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getDirectionFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getElevation, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getElevationRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getOriginIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, isRefractionCorrected, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$AnglesMeasurement)[] = {
          { Py_tp_methods, t_CRD$AnglesMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$AnglesMeasurement_init_ },
          { Py_tp_getset, t_CRD$AnglesMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$AnglesMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$AnglesMeasurement, t_CRD$AnglesMeasurement, CRD$AnglesMeasurement);

        void t_CRD$AnglesMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$AnglesMeasurement), &PY_TYPE_DEF(CRD$AnglesMeasurement), module, "CRD$AnglesMeasurement", 0);
        }

        void t_CRD$AnglesMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "class_", make_descriptor(CRD$AnglesMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "wrapfn_", make_descriptor(t_CRD$AnglesMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$AnglesMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$AnglesMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$AnglesMeasurement::wrap_Object(CRD$AnglesMeasurement(((t_CRD$AnglesMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$AnglesMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$AnglesMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$AnglesMeasurement_init_(t_CRD$AnglesMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jint a3;
          jint a4;
          jboolean a5;
          jdouble a6;
          jdouble a7;
          CRD$AnglesMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDDIIZDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            INT_CALL(object = CRD$AnglesMeasurement(a0, a1, a2, a3, a4, a5, a6, a7));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$AnglesMeasurement_getAzimuth(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAzimuth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getAzimuthRate(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAzimuthRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getDate(t_CRD$AnglesMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getDirectionFlag(t_CRD$AnglesMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDirectionFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getElevation(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getElevationRate(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getElevationRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getOriginIndicator(t_CRD$AnglesMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOriginIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_isRefractionCorrected(t_CRD$AnglesMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isRefractionCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_toCrdString(t_CRD$AnglesMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_toString(t_CRD$AnglesMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$AnglesMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__azimuth(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAzimuth());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__azimuthRate(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAzimuthRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__date(t_CRD$AnglesMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__directionFlag(t_CRD$AnglesMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDirectionFlag());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__elevation(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__elevationRate(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getElevationRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__originIndicator(t_CRD$AnglesMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOriginIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__refractionCorrected(t_CRD$AnglesMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isRefractionCorrected());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/MultipleShooter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooter::class$ = NULL;
      jmethodID *MultipleShooter::mids$ = NULL;
      bool MultipleShooter::live$ = false;

      jclass MultipleShooter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_56e88fd08b255763] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
          mids$[mid_computeAdditionalConstraints_1122e29f2a25b86f] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_29dc26d4c6c7bd43] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_getAugmentedInitialState_d91edcd61f36fecc] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultipleShooter::MultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_56e88fd08b255763, a0.this$, a1.this$, a2.this$, a3, a4)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MultipleShooter__methods_[] = {
        DECLARE_METHOD(t_MultipleShooter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooter, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooter)[] = {
        { Py_tp_methods, t_MultipleShooter__methods_ },
        { Py_tp_init, (void *) t_MultipleShooter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooter)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
        NULL
      };

      DEFINE_TYPE(MultipleShooter, t_MultipleShooter, MultipleShooter);

      void t_MultipleShooter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooter), &PY_TYPE_DEF(MultipleShooter), module, "MultipleShooter", 0);
      }

      void t_MultipleShooter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "class_", make_descriptor(MultipleShooter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "wrapfn_", make_descriptor(t_MultipleShooter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooter::initializeClass, 1)))
          return NULL;
        return t_MultipleShooter::wrap_Object(MultipleShooter(((t_MultipleShooter *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        ::java::util::List a2((jobject) NULL);
        PyTypeObject **p2;
        jdouble a3;
        jint a4;
        MultipleShooter object((jobject) NULL);

        if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
        {
          INT_CALL(object = MultipleShooter(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixPreservingVisitor::live$ = false;

      jclass DefaultFieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b906415fb0b2ba27] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_ce0470d468f80a56] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_b02282271d2e33e3] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_a6d8caed839ba827] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixPreservingVisitor::DefaultFieldMatrixPreservingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b906415fb0b2ba27, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_ce0470d468f80a56]));
      }

      void DefaultFieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_b02282271d2e33e3], a0, a1, a2, a3, a4, a5);
      }

      void DefaultFieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_a6d8caed839ba827], a0, a1, a2.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixPreservingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixPreservingVisitor, t_DefaultFieldMatrixPreservingVisitor, DefaultFieldMatrixPreservingVisitor);
      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_Object(const DefaultFieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixPreservingVisitor), module, "DefaultFieldMatrixPreservingVisitor", 0);
      }

      void t_DefaultFieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "class_", make_descriptor(DefaultFieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixPreservingVisitor::wrap_Object(DefaultFieldMatrixPreservingVisitor(((t_DefaultFieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixPreservingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixPreservingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SparseRealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SparseRealMatrix::class$ = NULL;
      jmethodID *SparseRealMatrix::mids$ = NULL;
      bool SparseRealMatrix::live$ = false;

      jclass SparseRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SparseRealMatrix");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_SparseRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SparseRealMatrix_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_SparseRealMatrix__methods_[] = {
        DECLARE_METHOD(t_SparseRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SparseRealMatrix, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SparseRealMatrix)[] = {
        { Py_tp_methods, t_SparseRealMatrix__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SparseRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::RealMatrix),
        NULL
      };

      DEFINE_TYPE(SparseRealMatrix, t_SparseRealMatrix, SparseRealMatrix);

      void t_SparseRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(SparseRealMatrix), &PY_TYPE_DEF(SparseRealMatrix), module, "SparseRealMatrix", 0);
      }

      void t_SparseRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "class_", make_descriptor(SparseRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "wrapfn_", make_descriptor(t_SparseRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SparseRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SparseRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SparseRealMatrix::initializeClass, 1)))
          return NULL;
        return t_SparseRealMatrix::wrap_Object(SparseRealMatrix(((t_SparseRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_SparseRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SparseRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$CalibrationTargetConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$CalibrationTargetConfiguration::mids$ = NULL;
        bool CRDConfiguration$CalibrationTargetConfiguration::live$ = false;

        jclass CRDConfiguration$CalibrationTargetConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareName_3cffd47377eca18a] = env->getMethodID(cls, "getProcessingSoftwareName", "()Ljava/lang/String;");
            mids$[mid_getProcessingSoftwareVersion_3cffd47377eca18a] = env->getMethodID(cls, "getProcessingSoftwareVersion", "()Ljava/lang/String;");
            mids$[mid_getPulseEnergy_557b8123390d8d0c] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getSumOfAllConstantDelays_557b8123390d8d0c] = env->getMethodID(cls, "getSumOfAllConstantDelays", "()D");
            mids$[mid_getSurveyError_557b8123390d8d0c] = env->getMethodID(cls, "getSurveyError", "()D");
            mids$[mid_getSurveyedTargetDistance_557b8123390d8d0c] = env->getMethodID(cls, "getSurveyedTargetDistance", "()D");
            mids$[mid_getTargetName_3cffd47377eca18a] = env->getMethodID(cls, "getTargetName", "()Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareName_f5ffdf29129ef90a] = env->getMethodID(cls, "setProcessingSoftwareName", "(Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwareVersion_f5ffdf29129ef90a] = env->getMethodID(cls, "setProcessingSoftwareVersion", "(Ljava/lang/String;)V");
            mids$[mid_setPulseEnergy_10f281d777284cea] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setSumOfAllConstantDelays_10f281d777284cea] = env->getMethodID(cls, "setSumOfAllConstantDelays", "(D)V");
            mids$[mid_setSurveyError_10f281d777284cea] = env->getMethodID(cls, "setSurveyError", "(D)V");
            mids$[mid_setSurveyedTargetDistance_10f281d777284cea] = env->getMethodID(cls, "setSurveyedTargetDistance", "(D)V");
            mids$[mid_setTargetName_f5ffdf29129ef90a] = env->getMethodID(cls, "setTargetName", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_3cffd47377eca18a] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$CalibrationTargetConfiguration::CRDConfiguration$CalibrationTargetConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareName_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersion_3cffd47377eca18a]));
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSumOfAllConstantDelays() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfAllConstantDelays_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyError_557b8123390d8d0c]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyedTargetDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyedTargetDistance_557b8123390d8d0c]);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getTargetName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTargetName_3cffd47377eca18a]));
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareName_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareVersion(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersion_f5ffdf29129ef90a], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_10f281d777284cea], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSumOfAllConstantDelays(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSumOfAllConstantDelays_10f281d777284cea], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyError(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyError_10f281d777284cea], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyedTargetDistance(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyedTargetDistance_10f281d777284cea], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setTargetName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetName_f5ffdf29129ef90a], a0.this$);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$CalibrationTargetConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareName),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareVersion),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, pulseEnergy),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, sumOfAllConstantDelays),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyError),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyedTargetDistance),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, targetName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$CalibrationTargetConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareVersion, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getPulseEnergy, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSumOfAllConstantDelays, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyError, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyedTargetDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getTargetName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareVersion, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setPulseEnergy, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSumOfAllConstantDelays, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyError, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyedTargetDistance, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setTargetName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$CalibrationTargetConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$CalibrationTargetConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$CalibrationTargetConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$CalibrationTargetConfiguration, t_CRDConfiguration$CalibrationTargetConfiguration, CRDConfiguration$CalibrationTargetConfiguration);

        void t_CRDConfiguration$CalibrationTargetConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), &PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration), module, "CRDConfiguration$CalibrationTargetConfiguration", 0);
        }

        void t_CRDConfiguration$CalibrationTargetConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "class_", make_descriptor(CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$CalibrationTargetConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(CRDConfiguration$CalibrationTargetConfiguration(((t_CRDConfiguration$CalibrationTargetConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$CalibrationTargetConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$CalibrationTargetConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersion());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersion", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseEnergy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseEnergy", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSumOfAllConstantDelays(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSumOfAllConstantDelays", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyError(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyError", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyedTargetDistance(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyedTargetDistance", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTargetName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareName", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersion());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersion", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseEnergy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseEnergy", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSumOfAllConstantDelays(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sumOfAllConstantDelays", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyError());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyError(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyError", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyedTargetDistance(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyedTargetDistance", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTargetName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetName", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *HighamHall54FieldIntegrator::class$ = NULL;
        jmethodID *HighamHall54FieldIntegrator::mids$ = NULL;
        bool HighamHall54FieldIntegrator::live$ = false;

        jclass HighamHall54FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/HighamHall54FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4879aa54fb0b4b90] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_f2e08e06cc4e8e8d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_estimateError_db5b00c957704bb3] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");
            mids$[mid_createInterpolator_d6a83ae02b2e26e5] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/HighamHall54FieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_4879aa54fb0b4b90, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        HighamHall54FieldIntegrator::HighamHall54FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f2e08e06cc4e8e8d, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > HighamHall54FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > HighamHall54FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
        }

        jint HighamHall54FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {
        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data);
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, a),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, b),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, c),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, order),
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegrator)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegrator_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegrator, t_HighamHall54FieldIntegrator, HighamHall54FieldIntegrator);
        PyObject *t_HighamHall54FieldIntegrator::wrap_Object(const HighamHall54FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegrator *self = (t_HighamHall54FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegrator), &PY_TYPE_DEF(HighamHall54FieldIntegrator), module, "HighamHall54FieldIntegrator", 0);
        }

        void t_HighamHall54FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "class_", make_descriptor(HighamHall54FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegrator::wrap_Object(HighamHall54FieldIntegrator(((t_HighamHall54FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegrator_of_(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegrator_init_(t_HighamHall54FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              HighamHall54FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = HighamHall54FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54FieldIntegrator_getA(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getB(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getC(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_HighamHall54FieldIntegrator_getOrder(t_HighamHall54FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegrator_get__parameters_(t_HighamHall54FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__a(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__b(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__c(t_HighamHall54FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_HighamHall54FieldIntegrator_get__order(t_HighamHall54FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemWriter::class$ = NULL;
              jmethodID *AemWriter::mids$ = NULL;
              bool AemWriter::live$ = false;
              jdouble AemWriter::CCSDS_AEM_VERS = (jdouble) 0;
              jint AemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass AemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_170ee021ab23bf06] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_ef28fc5796839007] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/adm/aem/AemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_AEM_VERS = env->getStaticDoubleField(cls, "CCSDS_AEM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemWriter::AemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_170ee021ab23bf06, a0.this$, a1.this$, a2.this$)) {}
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args);
              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data);
              static PyGetSetDef t_AemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_AemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemWriter__methods_[] = {
                DECLARE_METHOD(t_AemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemWriter)[] = {
                { Py_tp_methods, t_AemWriter__methods_ },
                { Py_tp_init, (void *) t_AemWriter_init_ },
                { Py_tp_getset, t_AemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(AemWriter, t_AemWriter, AemWriter);
              PyObject *t_AemWriter::wrap_Object(const AemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_AemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_AemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AemWriter), &PY_TYPE_DEF(AemWriter), module, "AemWriter", 0);
              }

              void t_AemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "class_", make_descriptor(AemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "wrapfn_", make_descriptor(t_AemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "CCSDS_AEM_VERS", make_descriptor(AemWriter::CCSDS_AEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "KVN_PADDING_WIDTH", make_descriptor(AemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemWriter::initializeClass, 1)))
                  return NULL;
                return t_AemWriter::wrap_Object(AemWriter(((t_AemWriter *) arg)->object.this$));
              }
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                AemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = AemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(Aem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonAbstractManeuverTriggers::class$ = NULL;
          jmethodID *PythonAbstractManeuverTriggers::mids$ = NULL;
          bool PythonAbstractManeuverTriggers::live$ = false;

          jclass PythonAbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_isFiringOnInitialState_1e4c79a00429445e] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractManeuverTriggers::PythonAbstractManeuverTriggers() : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonAbstractManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonAbstractManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonAbstractManeuverTriggers::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self);
          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonAbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonAbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonAbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(PythonAbstractManeuverTriggers, t_PythonAbstractManeuverTriggers, PythonAbstractManeuverTriggers);

          void t_PythonAbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractManeuverTriggers), &PY_TYPE_DEF(PythonAbstractManeuverTriggers), module, "PythonAbstractManeuverTriggers", 1);
          }

          void t_PythonAbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "class_", make_descriptor(PythonAbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "wrapfn_", make_descriptor(t_PythonAbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getEventDetectors0 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getFieldEventDetectors1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractManeuverTriggers_getParametersDrivers2 },
              { "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z", (void *) t_PythonAbstractManeuverTriggers_isFiringOnInitialState3 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractManeuverTriggers_pythonDecRef4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractManeuverTriggers::wrap_Object(PythonAbstractManeuverTriggers(((t_PythonAbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonAbstractManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getEventDetectors", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getFieldEventDetectors", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getParametersDrivers", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = (a1 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "isFiringOnInitialState", "OO", o0, o1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiringOnInitialState", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizerBounds::class$ = NULL;
        jmethodID *StepNormalizerBounds::mids$ = NULL;
        bool StepNormalizerBounds::live$ = false;
        StepNormalizerBounds *StepNormalizerBounds::BOTH = NULL;
        StepNormalizerBounds *StepNormalizerBounds::FIRST = NULL;
        StepNormalizerBounds *StepNormalizerBounds::LAST = NULL;
        StepNormalizerBounds *StepNormalizerBounds::NEITHER = NULL;

        jclass StepNormalizerBounds::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizerBounds");

            mids$ = new jmethodID[max_mid];
            mids$[mid_firstIncluded_89b302893bdbe1f1] = env->getMethodID(cls, "firstIncluded", "()Z");
            mids$[mid_lastIncluded_89b302893bdbe1f1] = env->getMethodID(cls, "lastIncluded", "()Z");
            mids$[mid_valueOf_bad0ea1b60cf5784] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");
            mids$[mid_values_d67261071acf40e3] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/sampling/StepNormalizerBounds;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOTH = new StepNormalizerBounds(env->getStaticObjectField(cls, "BOTH", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            FIRST = new StepNormalizerBounds(env->getStaticObjectField(cls, "FIRST", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            LAST = new StepNormalizerBounds(env->getStaticObjectField(cls, "LAST", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            NEITHER = new StepNormalizerBounds(env->getStaticObjectField(cls, "NEITHER", "Lorg/hipparchus/ode/sampling/StepNormalizerBounds;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean StepNormalizerBounds::firstIncluded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_firstIncluded_89b302893bdbe1f1]);
        }

        jboolean StepNormalizerBounds::lastIncluded() const
        {
          return env->callBooleanMethod(this$, mids$[mid_lastIncluded_89b302893bdbe1f1]);
        }

        StepNormalizerBounds StepNormalizerBounds::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StepNormalizerBounds(env->callStaticObjectMethod(cls, mids$[mid_valueOf_bad0ea1b60cf5784], a0.this$));
        }

        JArray< StepNormalizerBounds > StepNormalizerBounds::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StepNormalizerBounds >(env->callStaticObjectMethod(cls, mids$[mid_values_d67261071acf40e3]));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_StepNormalizerBounds_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerBounds_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizerBounds_of_(t_StepNormalizerBounds *self, PyObject *args);
        static PyObject *t_StepNormalizerBounds_firstIncluded(t_StepNormalizerBounds *self);
        static PyObject *t_StepNormalizerBounds_lastIncluded(t_StepNormalizerBounds *self);
        static PyObject *t_StepNormalizerBounds_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StepNormalizerBounds_values(PyTypeObject *type);
        static PyObject *t_StepNormalizerBounds_get__parameters_(t_StepNormalizerBounds *self, void *data);
        static PyGetSetDef t_StepNormalizerBounds__fields_[] = {
          DECLARE_GET_FIELD(t_StepNormalizerBounds, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StepNormalizerBounds__methods_[] = {
          DECLARE_METHOD(t_StepNormalizerBounds, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, of_, METH_VARARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, firstIncluded, METH_NOARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, lastIncluded, METH_NOARGS),
          DECLARE_METHOD(t_StepNormalizerBounds, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizerBounds, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizerBounds)[] = {
          { Py_tp_methods, t_StepNormalizerBounds__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StepNormalizerBounds__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizerBounds)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StepNormalizerBounds, t_StepNormalizerBounds, StepNormalizerBounds);
        PyObject *t_StepNormalizerBounds::wrap_Object(const StepNormalizerBounds& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerBounds::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerBounds *self = (t_StepNormalizerBounds *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StepNormalizerBounds::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StepNormalizerBounds::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StepNormalizerBounds *self = (t_StepNormalizerBounds *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StepNormalizerBounds::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizerBounds), &PY_TYPE_DEF(StepNormalizerBounds), module, "StepNormalizerBounds", 0);
        }

        void t_StepNormalizerBounds::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "class_", make_descriptor(StepNormalizerBounds::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "wrapfn_", make_descriptor(t_StepNormalizerBounds::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "boxfn_", make_descriptor(boxObject));
          env->getClass(StepNormalizerBounds::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "BOTH", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::BOTH)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "FIRST", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::FIRST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "LAST", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::LAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizerBounds), "NEITHER", make_descriptor(t_StepNormalizerBounds::wrap_Object(*StepNormalizerBounds::NEITHER)));
        }

        static PyObject *t_StepNormalizerBounds_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizerBounds::initializeClass, 1)))
            return NULL;
          return t_StepNormalizerBounds::wrap_Object(StepNormalizerBounds(((t_StepNormalizerBounds *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizerBounds_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizerBounds::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StepNormalizerBounds_of_(t_StepNormalizerBounds *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StepNormalizerBounds_firstIncluded(t_StepNormalizerBounds *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.firstIncluded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_StepNormalizerBounds_lastIncluded(t_StepNormalizerBounds *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.lastIncluded());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_StepNormalizerBounds_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StepNormalizerBounds result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerBounds::valueOf(a0));
            return t_StepNormalizerBounds::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StepNormalizerBounds_values(PyTypeObject *type)
        {
          JArray< StepNormalizerBounds > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::sampling::StepNormalizerBounds::values());
          return JArray<jobject>(result.this$).wrap(t_StepNormalizerBounds::wrap_jobject);
        }
        static PyObject *t_StepNormalizerBounds_get__parameters_(t_StepNormalizerBounds *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/python/PythonFunction.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonFunction::class$ = NULL;
      jmethodID *PythonFunction::mids$ = NULL;
      bool PythonFunction::live$ = false;

      jclass PythonFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_apply_65d69db95c5eb156] = env->getMethodID(cls, "apply", "(Ljava/lang/Object;)Ljava/lang/Object;");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFunction::PythonFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace python {
      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args);
      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self);
      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args);
      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data);
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data);
      static PyGetSetDef t_PythonFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFunction, self),
        DECLARE_GET_FIELD(t_PythonFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFunction__methods_[] = {
        DECLARE_METHOD(t_PythonFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFunction)[] = {
        { Py_tp_methods, t_PythonFunction__methods_ },
        { Py_tp_init, (void *) t_PythonFunction_init_ },
        { Py_tp_getset, t_PythonFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFunction, t_PythonFunction, PythonFunction);
      PyObject *t_PythonFunction::wrap_Object(const PythonFunction& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFunction::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFunction *self = (t_PythonFunction *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFunction), &PY_TYPE_DEF(PythonFunction), module, "PythonFunction", 1);
      }

      void t_PythonFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "class_", make_descriptor(PythonFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "wrapfn_", make_descriptor(t_PythonFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "apply", "(Ljava/lang/Object;)Ljava/lang/Object;", (void *) t_PythonFunction_apply0 },
          { "pythonDecRef", "()V", (void *) t_PythonFunction_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFunction::initializeClass, 1)))
          return NULL;
        return t_PythonFunction::wrap_Object(PythonFunction(((t_PythonFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFunction_of_(t_PythonFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFunction_init_(t_PythonFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonFunction object((jobject) NULL);

        INT_CALL(object = PythonFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFunction_finalize(t_PythonFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFunction_pythonExtension(t_PythonFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonFunction_apply0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *o0 = ::java::lang::t_Object::wrap_Object(::java::lang::Object(a0));
        PyObject *result = PyObject_CallMethod(obj, "apply", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("apply", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonFunction_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFunction::mids$[PythonFunction::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFunction_get__self(t_PythonFunction *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
      static PyObject *t_PythonFunction_get__parameters_(t_PythonFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1058::class$ = NULL;
              jmethodID *Rtcm1058::mids$ = NULL;
              bool Rtcm1058::live$ = false;

              jclass Rtcm1058::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1058");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_fca910fb352c04ac] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1058::Rtcm1058(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_fca910fb352c04ac, a0, a1.this$, a2.this$)) {}
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args);
              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data);
              static PyGetSetDef t_Rtcm1058__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1058, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1058__methods_[] = {
                DECLARE_METHOD(t_Rtcm1058, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1058, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1058)[] = {
                { Py_tp_methods, t_Rtcm1058__methods_ },
                { Py_tp_init, (void *) t_Rtcm1058_init_ },
                { Py_tp_getset, t_Rtcm1058__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1058)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1058, t_Rtcm1058, Rtcm1058);
              PyObject *t_Rtcm1058::wrap_Object(const Rtcm1058& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1058::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1058::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1058 *self = (t_Rtcm1058 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1058::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1058), &PY_TYPE_DEF(Rtcm1058), module, "Rtcm1058", 0);
              }

              void t_Rtcm1058::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "class_", make_descriptor(Rtcm1058::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "wrapfn_", make_descriptor(t_Rtcm1058::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1058), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1058_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1058::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1058::wrap_Object(Rtcm1058(((t_Rtcm1058 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1058_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1058::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1058_of_(t_Rtcm1058 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1058_init_(t_Rtcm1058 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1058 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1058(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmClockCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1058_get__parameters_(t_Rtcm1058 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonLOF.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonLOF::class$ = NULL;
      jmethodID *PythonLOF::mids$ = NULL;
      bool PythonLOF::live$ = false;

      jclass PythonLOF::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonLOF");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_rotationFromInertial_9b71bf39454b4a07] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_rotationFromInertial_1022f468fb3d1015] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLOF::PythonLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonLOF::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonLOF::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonLOF::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self);
      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args);
      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data);
      static PyGetSetDef t_PythonLOF__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLOF, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLOF__methods_[] = {
        DECLARE_METHOD(t_PythonLOF, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLOF, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLOF, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLOF)[] = {
        { Py_tp_methods, t_PythonLOF__methods_ },
        { Py_tp_init, (void *) t_PythonLOF_init_ },
        { Py_tp_getset, t_PythonLOF__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLOF)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonLOF, t_PythonLOF, PythonLOF);

      void t_PythonLOF::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLOF), &PY_TYPE_DEF(PythonLOF), module, "PythonLOF", 1);
      }

      void t_PythonLOF::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "class_", make_descriptor(PythonLOF::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "wrapfn_", make_descriptor(t_PythonLOF::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLOF), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLOF::initializeClass);
        JNINativeMethod methods[] = {
          { "getName", "()Ljava/lang/String;", (void *) t_PythonLOF_getName0 },
          { "pythonDecRef", "()V", (void *) t_PythonLOF_pythonDecRef1 },
          { "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonLOF_rotationFromInertial2 },
          { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonLOF_rotationFromInertial3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonLOF_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLOF::initializeClass, 1)))
          return NULL;
        return t_PythonLOF::wrap_Object(PythonLOF(((t_PythonLOF *) arg)->object.this$));
      }
      static PyObject *t_PythonLOF_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLOF::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLOF_init_(t_PythonLOF *self, PyObject *args, PyObject *kwds)
      {
        PythonLOF object((jobject) NULL);

        INT_CALL(object = PythonLOF());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonLOF_finalize(t_PythonLOF *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLOF_pythonExtension(t_PythonLOF *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonLOF_getName0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonLOF_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonLOF_rotationFromInertial2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonLOF_rotationFromInertial3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLOF::mids$[PythonLOF::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
        PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
        {
          throwTypeError("rotationFromInertial", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static PyObject *t_PythonLOF_get__self(t_PythonLOF *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/TideSystemProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *TideSystemProvider::class$ = NULL;
          jmethodID *TideSystemProvider::mids$ = NULL;
          bool TideSystemProvider::live$ = false;

          jclass TideSystemProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/TideSystemProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getTideSystem_7d9a2a298dcb49fa] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::TideSystem TideSystemProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_7d9a2a298dcb49fa]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {
          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self);
          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data);
          static PyGetSetDef t_TideSystemProvider__fields_[] = {
            DECLARE_GET_FIELD(t_TideSystemProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TideSystemProvider__methods_[] = {
            DECLARE_METHOD(t_TideSystemProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TideSystemProvider, getTideSystem, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TideSystemProvider)[] = {
            { Py_tp_methods, t_TideSystemProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_TideSystemProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TideSystemProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TideSystemProvider, t_TideSystemProvider, TideSystemProvider);

          void t_TideSystemProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(TideSystemProvider), &PY_TYPE_DEF(TideSystemProvider), module, "TideSystemProvider", 0);
          }

          void t_TideSystemProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "class_", make_descriptor(TideSystemProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "wrapfn_", make_descriptor(t_TideSystemProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TideSystemProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TideSystemProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TideSystemProvider::initializeClass, 1)))
              return NULL;
            return t_TideSystemProvider::wrap_Object(TideSystemProvider(((t_TideSystemProvider *) arg)->object.this$));
          }
          static PyObject *t_TideSystemProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TideSystemProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TideSystemProvider_getTideSystem(t_TideSystemProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_TideSystemProvider_get__tideSystem(t_TideSystemProvider *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/SimpsonIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *SimpsonIntegrator::class$ = NULL;
        jmethodID *SimpsonIntegrator::mids$ = NULL;
        bool SimpsonIntegrator::live$ = false;
        jint SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass SimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/SimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_a84c9a223722150c] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_8ceb2936471aec5d] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_557b8123390d8d0c] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpsonIntegrator::SimpsonIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        SimpsonIntegrator::SimpsonIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_a84c9a223722150c, a0, a1)) {}

        SimpsonIntegrator::SimpsonIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_8ceb2936471aec5d, a0, a1, a2, a3)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_SimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpsonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpsonIntegrator)[] = {
          { Py_tp_methods, t_SimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_SimpsonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(SimpsonIntegrator, t_SimpsonIntegrator, SimpsonIntegrator);

        void t_SimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpsonIntegrator), &PY_TYPE_DEF(SimpsonIntegrator), module, "SimpsonIntegrator", 0);
        }

        void t_SimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "class_", make_descriptor(SimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "wrapfn_", make_descriptor(t_SimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(SimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_SimpsonIntegrator::wrap_Object(SimpsonIntegrator(((t_SimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpsonIntegrator object((jobject) NULL);

              INT_CALL(object = SimpsonIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *ODEStepHandler::class$ = NULL;
        jmethodID *ODEStepHandler::mids$ = NULL;
        bool ODEStepHandler::live$ = false;

        jclass ODEStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/ODEStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_b79fdee299d79fcc] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_b272ebb5ead79c81] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_7e69c83de8052a2b] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ODEStepHandler::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_b79fdee299d79fcc], a0.this$);
        }

        void ODEStepHandler::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_b272ebb5ead79c81], a0.this$);
        }

        void ODEStepHandler::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_7e69c83de8052a2b], a0.this$, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {
        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg);
        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args);

        static PyMethodDef t_ODEStepHandler__methods_[] = {
          DECLARE_METHOD(t_ODEStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEStepHandler, finish, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_ODEStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEStepHandler)[] = {
          { Py_tp_methods, t_ODEStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEStepHandler, t_ODEStepHandler, ODEStepHandler);

        void t_ODEStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEStepHandler), &PY_TYPE_DEF(ODEStepHandler), module, "ODEStepHandler", 0);
        }

        void t_ODEStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "class_", make_descriptor(ODEStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "wrapfn_", make_descriptor(t_ODEStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEStepHandler::initializeClass, 1)))
            return NULL;
          return t_ODEStepHandler::wrap_Object(ODEStepHandler(((t_ODEStepHandler *) arg)->object.this$));
        }
        static PyObject *t_ODEStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEStepHandler_finish(t_ODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_ODEStepHandler_handleStep(t_ODEStepHandler *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_ODEStepHandler_init(t_ODEStepHandler *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/RoughVisibilityEstimator.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *RoughVisibilityEstimator::class$ = NULL;
        jmethodID *RoughVisibilityEstimator::mids$ = NULL;
        bool RoughVisibilityEstimator::live$ = false;

        jclass RoughVisibilityEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/RoughVisibilityEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_500f509a1d8d8904] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/frames/Frame;Ljava/util/List;)V");
            mids$[mid_estimateVisibility_c9efe5cf116ca41b] = env->getMethodID(cls, "estimateVisibility", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RoughVisibilityEstimator::RoughVisibilityEstimator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::frames::Frame & a1, const ::java::util::List & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_500f509a1d8d8904, a0.this$, a1.this$, a2.this$)) {}

        ::org::orekit::time::AbsoluteDate RoughVisibilityEstimator::estimateVisibility(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_estimateVisibility_c9efe5cf116ca41b], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {
        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg);

        static PyMethodDef t_RoughVisibilityEstimator__methods_[] = {
          DECLARE_METHOD(t_RoughVisibilityEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RoughVisibilityEstimator, estimateVisibility, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RoughVisibilityEstimator)[] = {
          { Py_tp_methods, t_RoughVisibilityEstimator__methods_ },
          { Py_tp_init, (void *) t_RoughVisibilityEstimator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RoughVisibilityEstimator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RoughVisibilityEstimator, t_RoughVisibilityEstimator, RoughVisibilityEstimator);

        void t_RoughVisibilityEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(RoughVisibilityEstimator), &PY_TYPE_DEF(RoughVisibilityEstimator), module, "RoughVisibilityEstimator", 0);
        }

        void t_RoughVisibilityEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "class_", make_descriptor(RoughVisibilityEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "wrapfn_", make_descriptor(t_RoughVisibilityEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RoughVisibilityEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RoughVisibilityEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RoughVisibilityEstimator::initializeClass, 1)))
            return NULL;
          return t_RoughVisibilityEstimator::wrap_Object(RoughVisibilityEstimator(((t_RoughVisibilityEstimator *) arg)->object.this$));
        }
        static PyObject *t_RoughVisibilityEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RoughVisibilityEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RoughVisibilityEstimator_init_(t_RoughVisibilityEstimator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
          ::org::orekit::frames::Frame a1((jobject) NULL);
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          RoughVisibilityEstimator object((jobject) NULL);

          if (!parseArgs(args, "kkK", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = RoughVisibilityEstimator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_RoughVisibilityEstimator_estimateVisibility(t_RoughVisibilityEstimator *self, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.estimateVisibility(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateVisibility", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/LibrationOrbitFamily.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbitFamily::class$ = NULL;
      jmethodID *LibrationOrbitFamily::mids$ = NULL;
      bool LibrationOrbitFamily::live$ = false;
      LibrationOrbitFamily *LibrationOrbitFamily::NORTHERN = NULL;
      LibrationOrbitFamily *LibrationOrbitFamily::SOUTHERN = NULL;

      jclass LibrationOrbitFamily::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbitFamily");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_38ed60f4ae85210b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/orbits/LibrationOrbitFamily;");
          mids$[mid_values_6ba00f806d8c0756] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/orbits/LibrationOrbitFamily;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          NORTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "NORTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          SOUTHERN = new LibrationOrbitFamily(env->getStaticObjectField(cls, "SOUTHERN", "Lorg/orekit/orbits/LibrationOrbitFamily;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LibrationOrbitFamily LibrationOrbitFamily::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LibrationOrbitFamily(env->callStaticObjectMethod(cls, mids$[mid_valueOf_38ed60f4ae85210b], a0.this$));
      }

      JArray< LibrationOrbitFamily > LibrationOrbitFamily::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LibrationOrbitFamily >(env->callStaticObjectMethod(cls, mids$[mid_values_6ba00f806d8c0756]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace orbits {
      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type);
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data);
      static PyGetSetDef t_LibrationOrbitFamily__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbitFamily, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbitFamily__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbitFamily, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, of_, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbitFamily, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbitFamily, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbitFamily)[] = {
        { Py_tp_methods, t_LibrationOrbitFamily__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbitFamily__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbitFamily)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LibrationOrbitFamily, t_LibrationOrbitFamily, LibrationOrbitFamily);
      PyObject *t_LibrationOrbitFamily::wrap_Object(const LibrationOrbitFamily& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LibrationOrbitFamily::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LibrationOrbitFamily::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LibrationOrbitFamily *self = (t_LibrationOrbitFamily *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LibrationOrbitFamily::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbitFamily), &PY_TYPE_DEF(LibrationOrbitFamily), module, "LibrationOrbitFamily", 0);
      }

      void t_LibrationOrbitFamily::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "class_", make_descriptor(LibrationOrbitFamily::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "wrapfn_", make_descriptor(t_LibrationOrbitFamily::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "boxfn_", make_descriptor(boxObject));
        env->getClass(LibrationOrbitFamily::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "NORTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::NORTHERN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbitFamily), "SOUTHERN", make_descriptor(t_LibrationOrbitFamily::wrap_Object(*LibrationOrbitFamily::SOUTHERN)));
      }

      static PyObject *t_LibrationOrbitFamily_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbitFamily::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbitFamily::wrap_Object(LibrationOrbitFamily(((t_LibrationOrbitFamily *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbitFamily_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbitFamily::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbitFamily_of_(t_LibrationOrbitFamily *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LibrationOrbitFamily_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LibrationOrbitFamily result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::valueOf(a0));
          return t_LibrationOrbitFamily::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LibrationOrbitFamily_values(PyTypeObject *type)
      {
        JArray< LibrationOrbitFamily > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::orbits::LibrationOrbitFamily::values());
        return JArray<jobject>(result.this$).wrap(t_LibrationOrbitFamily::wrap_jobject);
      }
      static PyObject *t_LibrationOrbitFamily_get__parameters_(t_LibrationOrbitFamily *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBodyStaticContext::class$ = NULL;
            jmethodID *DSSTThirdBodyStaticContext::mids$ = NULL;
            bool DSSTThirdBodyStaticContext::live$ = false;

            jclass DSSTThirdBodyStaticContext::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBodyStaticContext");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_478bfc2cac501812] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;DD[D)V");
                mids$[mid_getMaxAR3Pow_412668abc8d889e9] = env->getMethodID(cls, "getMaxAR3Pow", "()I");
                mids$[mid_getMaxEccPow_412668abc8d889e9] = env->getMethodID(cls, "getMaxEccPow", "()I");
                mids$[mid_getMaxFreqF_412668abc8d889e9] = env->getMethodID(cls, "getMaxFreqF", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBodyStaticContext::DSSTThirdBodyStaticContext(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3) : ::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext(env->newObject(initializeClass, &mids$, mid_init$_478bfc2cac501812, a0.this$, a1, a2, a3.this$)) {}

            jint DSSTThirdBodyStaticContext::getMaxAR3Pow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxAR3Pow_412668abc8d889e9]);
            }

            jint DSSTThirdBodyStaticContext::getMaxEccPow() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxEccPow_412668abc8d889e9]);
            }

            jint DSSTThirdBodyStaticContext::getMaxFreqF() const
            {
              return env->callIntMethod(this$, mids$[mid_getMaxFreqF_412668abc8d889e9]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data);
            static PyGetSetDef t_DSSTThirdBodyStaticContext__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxAR3Pow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxEccPow),
              DECLARE_GET_FIELD(t_DSSTThirdBodyStaticContext, maxFreqF),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBodyStaticContext__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxAR3Pow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxEccPow, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBodyStaticContext, getMaxFreqF, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBodyStaticContext)[] = {
              { Py_tp_methods, t_DSSTThirdBodyStaticContext__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBodyStaticContext_init_ },
              { Py_tp_getset, t_DSSTThirdBodyStaticContext__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBodyStaticContext)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::semianalytical::dsst::forces::ForceModelContext),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBodyStaticContext, t_DSSTThirdBodyStaticContext, DSSTThirdBodyStaticContext);

            void t_DSSTThirdBodyStaticContext::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBodyStaticContext), &PY_TYPE_DEF(DSSTThirdBodyStaticContext), module, "DSSTThirdBodyStaticContext", 0);
            }

            void t_DSSTThirdBodyStaticContext::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "class_", make_descriptor(DSSTThirdBodyStaticContext::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "wrapfn_", make_descriptor(t_DSSTThirdBodyStaticContext::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBodyStaticContext), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTThirdBodyStaticContext_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBodyStaticContext::wrap_Object(DSSTThirdBodyStaticContext(((t_DSSTThirdBodyStaticContext *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBodyStaticContext_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBodyStaticContext::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBodyStaticContext_init_(t_DSSTThirdBodyStaticContext *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              DSSTThirdBodyStaticContext object((jobject) NULL);

              if (!parseArgs(args, "kDD[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = DSSTThirdBodyStaticContext(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxAR3Pow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxEccPow(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxEccPow());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_getMaxFreqF(t_DSSTThirdBodyStaticContext *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getMaxFreqF());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxAR3Pow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxAR3Pow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxEccPow(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxEccPow());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_DSSTThirdBodyStaticContext_get__maxFreqF(t_DSSTThirdBodyStaticContext *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getMaxFreqF());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractRelativisticJ2ClockModifier::class$ = NULL;
          jmethodID *AbstractRelativisticJ2ClockModifier::mids$ = NULL;
          bool AbstractRelativisticJ2ClockModifier::live$ = false;

          jclass AbstractRelativisticJ2ClockModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_relativisticJ2Correction_af5b76ca8791af38] = env->getMethodID(cls, "relativisticJ2Correction", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticJ2ClockModifier::AbstractRelativisticJ2ClockModifier(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractRelativisticJ2ClockModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRelativisticJ2ClockModifier)[] = {
            { Py_tp_methods, t_AbstractRelativisticJ2ClockModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractRelativisticJ2ClockModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRelativisticJ2ClockModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRelativisticJ2ClockModifier, t_AbstractRelativisticJ2ClockModifier, AbstractRelativisticJ2ClockModifier);

          void t_AbstractRelativisticJ2ClockModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRelativisticJ2ClockModifier), &PY_TYPE_DEF(AbstractRelativisticJ2ClockModifier), module, "AbstractRelativisticJ2ClockModifier", 0);
          }

          void t_AbstractRelativisticJ2ClockModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "class_", make_descriptor(AbstractRelativisticJ2ClockModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "wrapfn_", make_descriptor(t_AbstractRelativisticJ2ClockModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractRelativisticJ2ClockModifier::wrap_Object(AbstractRelativisticJ2ClockModifier(((t_AbstractRelativisticJ2ClockModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            AbstractRelativisticJ2ClockModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = AbstractRelativisticJ2ClockModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundAtNightDetector::class$ = NULL;
        jmethodID *GroundAtNightDetector::mids$ = NULL;
        bool GroundAtNightDetector::live$ = false;
        jdouble GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;

        jclass GroundAtNightDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundAtNightDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_122a0b45870ecfbd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/models/AtmosphericRefractionModel;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_2f542e7d5bad750d] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundAtNightDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ASTRONOMICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "ASTRONOMICAL_DAWN_DUSK_ELEVATION");
            CIVIL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "CIVIL_DAWN_DUSK_ELEVATION");
            NAUTICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "NAUTICAL_DAWN_DUSK_ELEVATION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundAtNightDetector::GroundAtNightDetector(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::models::AtmosphericRefractionModel & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_122a0b45870ecfbd, a0.this$, a1.this$, a2, a3.this$)) {}

        jdouble GroundAtNightDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args);
        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args);
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data);
        static PyGetSetDef t_GroundAtNightDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundAtNightDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundAtNightDetector__methods_[] = {
          DECLARE_METHOD(t_GroundAtNightDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundAtNightDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundAtNightDetector)[] = {
          { Py_tp_methods, t_GroundAtNightDetector__methods_ },
          { Py_tp_init, (void *) t_GroundAtNightDetector_init_ },
          { Py_tp_getset, t_GroundAtNightDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundAtNightDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundAtNightDetector, t_GroundAtNightDetector, GroundAtNightDetector);
        PyObject *t_GroundAtNightDetector::wrap_Object(const GroundAtNightDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundAtNightDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundAtNightDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundAtNightDetector), &PY_TYPE_DEF(GroundAtNightDetector), module, "GroundAtNightDetector", 0);
        }

        void t_GroundAtNightDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "class_", make_descriptor(GroundAtNightDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "wrapfn_", make_descriptor(t_GroundAtNightDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundAtNightDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "ASTRONOMICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "CIVIL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "NAUTICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION));
        }

        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundAtNightDetector::initializeClass, 1)))
            return NULL;
          return t_GroundAtNightDetector::wrap_Object(GroundAtNightDetector(((t_GroundAtNightDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundAtNightDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::models::AtmosphericRefractionModel a3((jobject) NULL);
          GroundAtNightDetector object((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GroundAtNightDetector(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundAtNightDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundAtNightDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldRotation::class$ = NULL;
          jmethodID *FieldRotation::mids$ = NULL;
          bool FieldRotation::live$ = false;

          jclass FieldRotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldRotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b2e28a0995250182] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_99519c74887c9a65] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/CalculusFieldElement;D)V");
              mids$[mid_init$_cd2793491083f130] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
              mids$[mid_init$_70afa204a0c5f293] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_7032bcc2305f4a2a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_c8fb986ac347be10] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_5df711e8e19596d4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Z)V");
              mids$[mid_applyInverseTo_8926439b3a3636df] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_588ed0f09550adb9] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_41277586417b5e98] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_3d90e30d4cb13513] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyInverseTo_dbc10859aa4336fa] = env->getMethodID(cls, "applyInverseTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_2c0fd42a693364fa] = env->getMethodID(cls, "applyInverseTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyInverseTo_700737d6d191289b] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyInverseTo_9938b214a9bc898d] = env->getStaticMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_8926439b3a3636df] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_588ed0f09550adb9] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_41277586417b5e98] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_3d90e30d4cb13513] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_applyTo_dbc10859aa4336fa] = env->getMethodID(cls, "applyTo", "([D[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_2c0fd42a693364fa] = env->getMethodID(cls, "applyTo", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_applyTo_700737d6d191289b] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_applyTo_9938b214a9bc898d] = env->getStaticMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_compose_6b040ce0cdf349fd] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_compose_1346c98f72663e1a] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_6b040ce0cdf349fd] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_composeInverse_1346c98f72663e1a] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_distance_0e2701e899e1a78d] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngle_613c8f46c659f636] = env->getMethodID(cls, "getAngle", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAngles_3af024ffea07f1eb] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAxis_2c83ede3dfe0d5da] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getIdentity_45d0c5633bdbb166] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_getMatrix_f180d140dce78d62] = env->getMethodID(cls, "getMatrix", "()[[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ0_613c8f46c659f636] = env->getMethodID(cls, "getQ0", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ1_613c8f46c659f636] = env->getMethodID(cls, "getQ1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ2_613c8f46c659f636] = env->getMethodID(cls, "getQ2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getQ3_613c8f46c659f636] = env->getMethodID(cls, "getQ3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_revert_73da4eeccf2b7e14] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
              mids$[mid_toRotation_1e0dc1a6788897b9] = env->getMethodID(cls, "toRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b2e28a0995250182, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99519c74887c9a65, a0.this$, a1)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd2793491083f130, a0.this$, a1.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_70afa204a0c5f293, a0.this$, a1.this$, a2.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7032bcc2305f4a2a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c8fb986ac347be10, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          FieldRotation::FieldRotation(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5df711e8e19596d4, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          FieldRotation FieldRotation::applyInverseTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_8926439b3a3636df], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_588ed0f09550adb9], a0.this$));
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_41277586417b5e98], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_3d90e30d4cb13513], a0.this$));
          }

          void FieldRotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_dbc10859aa4336fa], a0.this$, a1.this$);
          }

          void FieldRotation::applyInverseTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_2c0fd42a693364fa], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_700737d6d191289b], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyInverseTo_9938b214a9bc898d], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::applyTo(const FieldRotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_8926439b3a3636df], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_588ed0f09550adb9], a0.this$));
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_applyTo_41277586417b5e98], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_applyTo_3d90e30d4cb13513], a0.this$));
          }

          void FieldRotation::applyTo(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_dbc10859aa4336fa], a0.this$, a1.this$);
          }

          void FieldRotation::applyTo(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_2c0fd42a693364fa], a0.this$, a1.this$);
          }

          FieldRotation FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_applyTo_700737d6d191289b], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_applyTo_9938b214a9bc898d], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_6b040ce0cdf349fd], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::compose(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_compose_1346c98f72663e1a], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const FieldRotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_6b040ce0cdf349fd], a0.this$, a1.this$));
          }

          FieldRotation FieldRotation::composeInverse(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_composeInverse_1346c98f72663e1a], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::distance(const FieldRotation & a0, const FieldRotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_0e2701e899e1a78d], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getAngle() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAngle_613c8f46c659f636]));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldRotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAngles_3af024ffea07f1eb], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldRotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxis_2c83ede3dfe0d5da], a0.this$));
          }

          FieldRotation FieldRotation::getIdentity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_45d0c5633bdbb166], a0.this$));
          }

          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldRotation::getMatrix() const
          {
            return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getMatrix_f180d140dce78d62]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ0() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ0_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ1_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ2_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldRotation::getQ3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ3_613c8f46c659f636]));
          }

          FieldRotation FieldRotation::revert() const
          {
            return FieldRotation(env->callObjectMethod(this$, mids$[mid_revert_73da4eeccf2b7e14]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Rotation FieldRotation::toRotation() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_toRotation_1e0dc1a6788897b9]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args);
          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args);
          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg);
          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self);
          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self);
          static PyObject *t_FieldRotation_revert(t_FieldRotation *self);
          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self);
          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data);
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data);
          static PyGetSetDef t_FieldRotation__fields_[] = {
            DECLARE_GET_FIELD(t_FieldRotation, angle),
            DECLARE_GET_FIELD(t_FieldRotation, matrix),
            DECLARE_GET_FIELD(t_FieldRotation, q0),
            DECLARE_GET_FIELD(t_FieldRotation, q1),
            DECLARE_GET_FIELD(t_FieldRotation, q2),
            DECLARE_GET_FIELD(t_FieldRotation, q3),
            DECLARE_GET_FIELD(t_FieldRotation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldRotation__methods_[] = {
            DECLARE_METHOD(t_FieldRotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyInverseTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, applyTo_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_FieldRotation, getAxis, METH_O),
            DECLARE_METHOD(t_FieldRotation, getIdentity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldRotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, revert, METH_NOARGS),
            DECLARE_METHOD(t_FieldRotation, toRotation, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldRotation)[] = {
            { Py_tp_methods, t_FieldRotation__methods_ },
            { Py_tp_init, (void *) t_FieldRotation_init_ },
            { Py_tp_getset, t_FieldRotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldRotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldRotation, t_FieldRotation, FieldRotation);
          PyObject *t_FieldRotation::wrap_Object(const FieldRotation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldRotation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldRotation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldRotation *self = (t_FieldRotation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldRotation::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldRotation), &PY_TYPE_DEF(FieldRotation), module, "FieldRotation", 0);
          }

          void t_FieldRotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "class_", make_descriptor(FieldRotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "wrapfn_", make_descriptor(t_FieldRotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldRotation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldRotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldRotation::initializeClass, 1)))
              return NULL;
            return t_FieldRotation::wrap_Object(FieldRotation(((t_FieldRotation *) arg)->object.this$));
          }
          static PyObject *t_FieldRotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldRotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldRotation_of_(t_FieldRotation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldRotation_init_(t_FieldRotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "[[KD", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldRotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                jboolean a4;
                FieldRotation object((jobject) NULL);

                if (!parseArgs(args, "KKKKZ", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4))
                {
                  INT_CALL(object = FieldRotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
             default:
             err:
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldRotation_applyInverseTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyInverseTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyInverseTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyInverseTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "K", FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[D[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_applyTo_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                FieldRotation a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, FieldRotation::initializeClass, &a0, &a1, &p1, t_FieldRotation::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return t_FieldRotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::applyTo(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "applyTo_", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_compose(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.compose(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_composeInverse(t_FieldRotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldRotation a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
                PyTypeObject **p1;
                FieldRotation result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  OBJ_CALL(result = self->object.composeInverse(a0, a1));
                  return t_FieldRotation::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_distance(PyTypeObject *type, PyObject *args)
          {
            FieldRotation a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldRotation::initializeClass, FieldRotation::initializeClass, &a0, &p0, t_FieldRotation::parameters_, &a1, &p1, t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::distance(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAngle(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAngle());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getAngles(t_FieldRotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_FieldRotation_getAxis(t_FieldRotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getIdentity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldRotation result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldRotation::getIdentity(a0));
              return t_FieldRotation::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getIdentity", arg);
            return NULL;
          }

          static PyObject *t_FieldRotation_getMatrix(t_FieldRotation *self)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_getQ0(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ0());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ1(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ2(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_getQ3(t_FieldRotation *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldRotation_revert(t_FieldRotation *self)
          {
            FieldRotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldRotation::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldRotation_toRotation(t_FieldRotation *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.toRotation());
            return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
          }
          static PyObject *t_FieldRotation_get__parameters_(t_FieldRotation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldRotation_get__angle(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAngle());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__matrix(t_FieldRotation *self, void *data)
          {
            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_FieldRotation_get__q0(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ0());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q1(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q2(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ2());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldRotation_get__q3(t_FieldRotation *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ3());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/CodeBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *CodeBias::class$ = NULL;
            jmethodID *CodeBias::mids$ = NULL;
            bool CodeBias::live$ = false;

            jclass CodeBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/CodeBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
                mids$[mid_getCodeBias_557b8123390d8d0c] = env->getMethodID(cls, "getCodeBias", "()D");
                mids$[mid_getSignalID_412668abc8d889e9] = env->getMethodID(cls, "getSignalID", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CodeBias::CodeBias(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

            jdouble CodeBias::getCodeBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCodeBias_557b8123390d8d0c]);
            }

            jint CodeBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_412668abc8d889e9]);
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {
            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self);
            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self);
            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data);
            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data);
            static PyGetSetDef t_CodeBias__fields_[] = {
              DECLARE_GET_FIELD(t_CodeBias, codeBias),
              DECLARE_GET_FIELD(t_CodeBias, signalID),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CodeBias__methods_[] = {
              DECLARE_METHOD(t_CodeBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CodeBias, getCodeBias, METH_NOARGS),
              DECLARE_METHOD(t_CodeBias, getSignalID, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CodeBias)[] = {
              { Py_tp_methods, t_CodeBias__methods_ },
              { Py_tp_init, (void *) t_CodeBias_init_ },
              { Py_tp_getset, t_CodeBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CodeBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CodeBias, t_CodeBias, CodeBias);

            void t_CodeBias::install(PyObject *module)
            {
              installType(&PY_TYPE(CodeBias), &PY_TYPE_DEF(CodeBias), module, "CodeBias", 0);
            }

            void t_CodeBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "class_", make_descriptor(CodeBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "wrapfn_", make_descriptor(t_CodeBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CodeBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CodeBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CodeBias::initializeClass, 1)))
                return NULL;
              return t_CodeBias::wrap_Object(CodeBias(((t_CodeBias *) arg)->object.this$));
            }
            static PyObject *t_CodeBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CodeBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CodeBias_init_(t_CodeBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              CodeBias object((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                INT_CALL(object = CodeBias(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CodeBias_getCodeBias(t_CodeBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCodeBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_CodeBias_getSignalID(t_CodeBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_CodeBias_get__codeBias(t_CodeBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCodeBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_CodeBias_get__signalID(t_CodeBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/PythonAttitudeEphemerisFileParser.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "java/lang/String.h"
#include "java/io/BufferedReader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonAttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *PythonAttitudeEphemerisFileParser::mids$ = NULL;
        bool PythonAttitudeEphemerisFileParser::live$ = false;

        jclass PythonAttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonAttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_parse_10d7b05ae96f3423] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_parse_BS_b7edd62af73884f5] = env->getMethodID(cls, "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAttitudeEphemerisFileParser::PythonAttitudeEphemerisFileParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonAttitudeEphemerisFileParser::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonAttitudeEphemerisFileParser::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonAttitudeEphemerisFileParser::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self);
        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_PythonAttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAttitudeEphemerisFileParser, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAttitudeEphemerisFileParser, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_PythonAttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) t_PythonAttitudeEphemerisFileParser_init_ },
          { Py_tp_getset, t_PythonAttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonAttitudeEphemerisFileParser, t_PythonAttitudeEphemerisFileParser, PythonAttitudeEphemerisFileParser);

        void t_PythonAttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAttitudeEphemerisFileParser), &PY_TYPE_DEF(PythonAttitudeEphemerisFileParser), module, "PythonAttitudeEphemerisFileParser", 1);
        }

        void t_PythonAttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "class_", make_descriptor(PythonAttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_PythonAttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAttitudeEphemerisFileParser::initializeClass);
          JNINativeMethod methods[] = {
            { "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse0 },
            { "parse_BS", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/general/AttitudeEphemerisFile;", (void *) t_PythonAttitudeEphemerisFileParser_parse_BS1 },
            { "pythonDecRef", "()V", (void *) t_PythonAttitudeEphemerisFileParser_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_PythonAttitudeEphemerisFileParser::wrap_Object(PythonAttitudeEphemerisFileParser(((t_PythonAttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_PythonAttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAttitudeEphemerisFileParser_init_(t_PythonAttitudeEphemerisFileParser *self, PyObject *args, PyObject *kwds)
        {
          PythonAttitudeEphemerisFileParser object((jobject) NULL);

          INT_CALL(object = PythonAttitudeEphemerisFileParser());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_finalize(t_PythonAttitudeEphemerisFileParser *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_pythonExtension(t_PythonAttitudeEphemerisFileParser *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::org::orekit::data::t_DataSource::wrap_Object(::org::orekit::data::DataSource(a0));
          PyObject *result = PyObject_CallMethod(obj, "parse", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonAttitudeEphemerisFileParser_parse_BS1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::files::general::AttitudeEphemerisFile value((jobject) NULL);
          PyObject *o0 = ::java::io::t_BufferedReader::wrap_Object(::java::io::BufferedReader(a0));
          PyObject *o1 = env->fromJString((jstring) a1, 0);
          PyObject *result = PyObject_CallMethod(obj, "parse_BS", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &value))
          {
            throwTypeError("parse_BS", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonAttitudeEphemerisFileParser_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAttitudeEphemerisFileParser::mids$[PythonAttitudeEphemerisFileParser::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAttitudeEphemerisFileParser_get__self(t_PythonAttitudeEphemerisFileParser *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/PythonEarthShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/ReferenceEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/models/earth/EarthShape.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *PythonEarthShape::class$ = NULL;
        jmethodID *PythonEarthShape::mids$ = NULL;
        bool PythonEarthShape::live$ = false;

        jclass PythonEarthShape::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/PythonEarthShape");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getBodyFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getEllipsoid_576f0b44e8384336] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;");
            mids$[mid_getIntersectionPoint_6391bd6fdaac29a3] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_getIntersectionPoint_884873e1d3d77c4e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
            mids$[mid_projectToGround_3d4e9a6447a03aa9] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_projectToGround_4c5eeaf1ff845fca] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_transform_8b70a50ea3e1f728] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_transform_8b264141c1de262c] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_4dfad8dc678d42b2] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_transform_8e052cb77f98e021] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEarthShape::PythonEarthShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEarthShape::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEarthShape::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEarthShape::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self);
        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args);
        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data);
        static PyGetSetDef t_PythonEarthShape__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEarthShape, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEarthShape__methods_[] = {
          DECLARE_METHOD(t_PythonEarthShape, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEarthShape, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEarthShape, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEarthShape)[] = {
          { Py_tp_methods, t_PythonEarthShape__methods_ },
          { Py_tp_init, (void *) t_PythonEarthShape_init_ },
          { Py_tp_getset, t_PythonEarthShape__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEarthShape)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEarthShape, t_PythonEarthShape, PythonEarthShape);

        void t_PythonEarthShape::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEarthShape), &PY_TYPE_DEF(PythonEarthShape), module, "PythonEarthShape", 1);
        }

        void t_PythonEarthShape::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "class_", make_descriptor(PythonEarthShape::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "wrapfn_", make_descriptor(t_PythonEarthShape::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEarthShape), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEarthShape::initializeClass);
          JNINativeMethod methods[] = {
            { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonEarthShape_getBodyFrame0 },
            { "getEllipsoid", "()Lorg/orekit/models/earth/ReferenceEllipsoid;", (void *) t_PythonEarthShape_getEllipsoid1 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint2 },
            { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_getIntersectionPoint3 },
            { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonEarthShape_projectToGround4 },
            { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_projectToGround5 },
            { "pythonDecRef", "()V", (void *) t_PythonEarthShape_pythonDecRef6 },
            { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEarthShape_transform7 },
            { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEarthShape_transform8 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonEarthShape_transform9 },
            { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonEarthShape_transform10 },
          };
          env->registerNatives(cls, methods, 11);
        }

        static PyObject *t_PythonEarthShape_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEarthShape::initializeClass, 1)))
            return NULL;
          return t_PythonEarthShape::wrap_Object(PythonEarthShape(((t_PythonEarthShape *) arg)->object.this$));
        }
        static PyObject *t_PythonEarthShape_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEarthShape::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEarthShape_init_(t_PythonEarthShape *self, PyObject *args, PyObject *kwds)
        {
          PythonEarthShape object((jobject) NULL);

          INT_CALL(object = PythonEarthShape());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEarthShape_finalize(t_PythonEarthShape *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEarthShape_pythonExtension(t_PythonEarthShape *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jlong result;
              OBJ_CALL(result = self->object.pythonExtension());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
            break;
           case 1:
            {
              jlong a0;

              if (!parseArgs(args, "J", &a0))
              {
                OBJ_CALL(self->object.pythonExtension(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
          return NULL;
        }

        static jobject JNICALL t_PythonEarthShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getBodyFrame", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonEarthShape_getEllipsoid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::ReferenceEllipsoid value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getEllipsoid", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::ReferenceEllipsoid::initializeClass, &value))
          {
            throwTypeError("getEllipsoid", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonEarthShape_getIntersectionPoint3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
          PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
          PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("getIntersectionPoint", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonEarthShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonEarthShape_projectToGround5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
          PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToGround", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static void JNICALL t_PythonEarthShape_pythonDecRef6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEarthShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonEarthShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
          PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("transform", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonEarthShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static jobject JNICALL t_PythonEarthShape_transform10(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEarthShape::mids$[PythonEarthShape::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
          PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
          PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
          {
            throwTypeError("transform", result);
            Py_DECREF(result);
          }
          else
          {
            jobj = jenv->NewLocalRef(value.this$);
            Py_DECREF(result);
            return jobj;
          }

          return (jobject) NULL;
        }

        static PyObject *t_PythonEarthShape_get__self(t_PythonEarthShape *self, void *data)
        {
          jlong ptr;
          OBJ_CALL(ptr = self->object.pythonExtension());
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            Py_INCREF(obj);
            return obj;
          }
          else
            Py_RETURN_NONE;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomAdaptor.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomAdaptor::class$ = NULL;
      jmethodID *RandomAdaptor::mids$ = NULL;
      bool RandomAdaptor::live$ = false;

      jclass RandomAdaptor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomAdaptor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_19e7f6e95a4dc08e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextBoolean_89b302893bdbe1f1] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_d759c70c6670fd89] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_ac782c7077255dd3] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_04fe014f7609dc26] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_557b8123390d8d0c] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_412668abc8d889e9] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_0092017e99012694] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_9e26256fb0d384a2] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_f4ad805a81234b49] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_of_08fd520fa590684a] = env->getStaticMethodID(cls, "of", "(Lorg/hipparchus/random/RandomGenerator;)Ljava/util/Random;");
          mids$[mid_setSeed_ec63cb8a58ef5a54] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_a3da1a935cb37f7b] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3cd6a6b354c6aa22] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RandomAdaptor::RandomAdaptor(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::util::Random(env->newObject(initializeClass, &mids$, mid_init$_19e7f6e95a4dc08e, a0.this$)) {}

      jboolean RandomAdaptor::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_89b302893bdbe1f1]);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d759c70c6670fd89], a0.this$);
      }

      void RandomAdaptor::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_ac782c7077255dd3], a0.this$, a1, a2);
      }

      jdouble RandomAdaptor::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_557b8123390d8d0c]);
      }

      jfloat RandomAdaptor::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_04fe014f7609dc26]);
      }

      jdouble RandomAdaptor::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_557b8123390d8d0c]);
      }

      jint RandomAdaptor::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_412668abc8d889e9]);
      }

      jint RandomAdaptor::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_0092017e99012694], a0);
      }

      jlong RandomAdaptor::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_9e26256fb0d384a2]);
      }

      jlong RandomAdaptor::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_f4ad805a81234b49], a0);
      }

      ::java::util::Random RandomAdaptor::of(const ::org::hipparchus::random::RandomGenerator & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::util::Random(env->callStaticObjectMethod(cls, mids$[mid_of_08fd520fa590684a], a0.this$));
      }

      void RandomAdaptor::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_ec63cb8a58ef5a54], a0.this$);
      }

      void RandomAdaptor::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_a3da1a935cb37f7b], a0);
      }

      void RandomAdaptor::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3cd6a6b354c6aa22], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace random {
      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args);
      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args);
      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomAdaptor__fields_[] = {
        DECLARE_SET_FIELD(t_RandomAdaptor, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomAdaptor__methods_[] = {
        DECLARE_METHOD(t_RandomAdaptor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, nextBoolean, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextDouble, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextFloat, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextGaussian, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomAdaptor, of, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomAdaptor, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomAdaptor)[] = {
        { Py_tp_methods, t_RandomAdaptor__methods_ },
        { Py_tp_init, (void *) t_RandomAdaptor_init_ },
        { Py_tp_getset, t_RandomAdaptor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomAdaptor)[] = {
        &PY_TYPE_DEF(::java::util::Random),
        NULL
      };

      DEFINE_TYPE(RandomAdaptor, t_RandomAdaptor, RandomAdaptor);

      void t_RandomAdaptor::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomAdaptor), &PY_TYPE_DEF(RandomAdaptor), module, "RandomAdaptor", 0);
      }

      void t_RandomAdaptor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "class_", make_descriptor(RandomAdaptor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "wrapfn_", make_descriptor(t_RandomAdaptor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomAdaptor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomAdaptor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomAdaptor::initializeClass, 1)))
          return NULL;
        return t_RandomAdaptor::wrap_Object(RandomAdaptor(((t_RandomAdaptor *) arg)->object.this$));
      }
      static PyObject *t_RandomAdaptor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomAdaptor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RandomAdaptor_init_(t_RandomAdaptor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        RandomAdaptor object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = RandomAdaptor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_RandomAdaptor_nextBoolean(t_RandomAdaptor *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextBoolean());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBoolean", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextBytes(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            jint a2;

            if (!parseArgs(args, "[BII", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextBytes", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextDouble(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextDouble());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextDouble", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextFloat(t_RandomAdaptor *self, PyObject *args)
      {
        jfloat result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextFloat());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextFloat", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextGaussian(t_RandomAdaptor *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextGaussian());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextGaussian", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextInt(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextInt", args, 2);
      }

      static PyObject *t_RandomAdaptor_nextLong(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "nextLong", args, 2);
      }

      static PyObject *t_RandomAdaptor_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        ::java::util::Random result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::random::RandomAdaptor::of(a0));
          return ::java::util::t_Random::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }

      static PyObject *t_RandomAdaptor_setSeed(t_RandomAdaptor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        return callSuper(PY_TYPE(RandomAdaptor), (PyObject *) self, "setSeed", args, 2);
      }

      static int t_RandomAdaptor_set__seed(t_RandomAdaptor *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/FieldTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion$Converter::class$ = NULL;
      jmethodID *ITRFVersion$Converter::mids$ = NULL;
      bool ITRFVersion$Converter::live$ = false;

      jclass ITRFVersion$Converter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion$Converter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDestination_b311296551ce8af2] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_b311296551ce8af2] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getStaticTransform_7265a2d9c3b9a38a] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_68fd5b9bb9184393] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_df04e3927954349e] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_e70631ba002d9a32] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_b311296551ce8af2]));
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_b311296551ce8af2]));
      }

      ::org::orekit::frames::StaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_7265a2d9c3b9a38a], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_68fd5b9bb9184393], a0.this$));
      }

      ::org::orekit::frames::Transform ITRFVersion$Converter::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_df04e3927954349e], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ITRFVersion$Converter::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_e70631ba002d9a32], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data);
      static PyGetSetDef t_ITRFVersion$Converter__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, destination),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, origin),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion$Converter__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion$Converter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion$Converter)[] = {
        { Py_tp_methods, t_ITRFVersion$Converter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion$Converter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion$Converter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersion$Converter, t_ITRFVersion$Converter, ITRFVersion$Converter);
      PyObject *t_ITRFVersion$Converter::wrap_Object(const ITRFVersion$Converter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion$Converter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion$Converter::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion$Converter), &PY_TYPE_DEF(ITRFVersion$Converter), module, "ITRFVersion$Converter", 0);
      }

      void t_ITRFVersion$Converter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "class_", make_descriptor(ITRFVersion$Converter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "wrapfn_", make_descriptor(t_ITRFVersion$Converter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion$Converter::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion$Converter::wrap_Object(ITRFVersion$Converter(((t_ITRFVersion$Converter *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion$Converter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getTransform(a0));
              return ::org::orekit::frames::t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTransform", args);
        return NULL;
      }
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/maneuvers/ImpulseManeuver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ImpulseManeuver::class$ = NULL;
        jmethodID *ImpulseManeuver::mids$ = NULL;
        bool ImpulseManeuver::live$ = false;

        jclass ImpulseManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ImpulseManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a72590358f93cd86] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_63188daf92eb3db6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_165edace01f52664] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;)V");
            mids$[mid_g_1bbf81d80c47ecdd] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAttitudeOverride_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeOverride", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_getDeltaVSat_f88961cca75a2c0a] = env->getMethodID(cls, "getDeltaVSat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getIsp_557b8123390d8d0c] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getTrigger_0701b00b25822fff] = env->getMethodID(cls, "getTrigger", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_3ed87803c90c6b84] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/forces/maneuvers/ImpulseManeuver;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a72590358f93cd86, a0.this$, a1.this$, a2)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_63188daf92eb3db6, a0.this$, a1.this$, a2.this$, a3)) {}

        ImpulseManeuver::ImpulseManeuver(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a4) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_165edace01f52664, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        jdouble ImpulseManeuver::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_1bbf81d80c47ecdd], a0.this$);
        }

        ::org::orekit::attitudes::AttitudeProvider ImpulseManeuver::getAttitudeOverride() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeOverride_6df6b78ab9377151]));
        }

        ::org::orekit::forces::maneuvers::Control3DVectorCostType ImpulseManeuver::getControl3DVectorCostType() const
        {
          return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ImpulseManeuver::getDeltaVSat() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeltaVSat_f88961cca75a2c0a]));
        }

        jdouble ImpulseManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_557b8123390d8d0c]);
        }

        ::org::orekit::propagation::events::EventDetector ImpulseManeuver::getTrigger() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getTrigger_0701b00b25822fff]));
        }

        void ImpulseManeuver::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        static PyObject *t_ImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ImpulseManeuver_of_(t_ImpulseManeuver *self, PyObject *args);
        static int t_ImpulseManeuver_init_(t_ImpulseManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ImpulseManeuver_g(t_ImpulseManeuver *self, PyObject *args);
        static PyObject *t_ImpulseManeuver_getAttitudeOverride(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getControl3DVectorCostType(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getDeltaVSat(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getIsp(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_getTrigger(t_ImpulseManeuver *self);
        static PyObject *t_ImpulseManeuver_init(t_ImpulseManeuver *self, PyObject *args);
        static PyObject *t_ImpulseManeuver_get__attitudeOverride(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__control3DVectorCostType(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__deltaVSat(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__isp(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__trigger(t_ImpulseManeuver *self, void *data);
        static PyObject *t_ImpulseManeuver_get__parameters_(t_ImpulseManeuver *self, void *data);
        static PyGetSetDef t_ImpulseManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ImpulseManeuver, attitudeOverride),
          DECLARE_GET_FIELD(t_ImpulseManeuver, control3DVectorCostType),
          DECLARE_GET_FIELD(t_ImpulseManeuver, deltaVSat),
          DECLARE_GET_FIELD(t_ImpulseManeuver, isp),
          DECLARE_GET_FIELD(t_ImpulseManeuver, trigger),
          DECLARE_GET_FIELD(t_ImpulseManeuver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ImpulseManeuver__methods_[] = {
          DECLARE_METHOD(t_ImpulseManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ImpulseManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ImpulseManeuver, of_, METH_VARARGS),
          DECLARE_METHOD(t_ImpulseManeuver, g, METH_VARARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getAttitudeOverride, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getControl3DVectorCostType, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getDeltaVSat, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getIsp, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, getTrigger, METH_NOARGS),
          DECLARE_METHOD(t_ImpulseManeuver, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ImpulseManeuver)[] = {
          { Py_tp_methods, t_ImpulseManeuver__methods_ },
          { Py_tp_init, (void *) t_ImpulseManeuver_init_ },
          { Py_tp_getset, t_ImpulseManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ImpulseManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ImpulseManeuver, t_ImpulseManeuver, ImpulseManeuver);
        PyObject *t_ImpulseManeuver::wrap_Object(const ImpulseManeuver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ImpulseManeuver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ImpulseManeuver *self = (t_ImpulseManeuver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ImpulseManeuver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ImpulseManeuver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ImpulseManeuver *self = (t_ImpulseManeuver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ImpulseManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ImpulseManeuver), &PY_TYPE_DEF(ImpulseManeuver), module, "ImpulseManeuver", 0);
        }

        void t_ImpulseManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "class_", make_descriptor(ImpulseManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "wrapfn_", make_descriptor(t_ImpulseManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ImpulseManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ImpulseManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ImpulseManeuver::initializeClass, 1)))
            return NULL;
          return t_ImpulseManeuver::wrap_Object(ImpulseManeuver(((t_ImpulseManeuver *) arg)->object.this$));
        }
        static PyObject *t_ImpulseManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ImpulseManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ImpulseManeuver_of_(t_ImpulseManeuver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ImpulseManeuver_init_(t_ImpulseManeuver *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::forces::maneuvers::Control3DVectorCostType a4((jobject) NULL);
              PyTypeObject **p4;
              ImpulseManeuver object((jobject) NULL);

              if (!parseArgs(args, "kkkDK", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_))
              {
                INT_CALL(object = ImpulseManeuver(a0, a1, a2, a3, a4));
                self->object = object;
                self->parameters[0] = ::org::orekit::forces::maneuvers::PY_TYPE(ImpulseManeuver);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ImpulseManeuver_g(t_ImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ImpulseManeuver), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ImpulseManeuver_getAttitudeOverride(t_ImpulseManeuver *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getControl3DVectorCostType(t_ImpulseManeuver *self)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
          OBJ_CALL(result = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getDeltaVSat(t_ImpulseManeuver *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_getIsp(t_ImpulseManeuver *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIsp());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ImpulseManeuver_getTrigger(t_ImpulseManeuver *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_ImpulseManeuver_init(t_ImpulseManeuver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(ImpulseManeuver), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_ImpulseManeuver_get__parameters_(t_ImpulseManeuver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ImpulseManeuver_get__attitudeOverride(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeOverride());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__control3DVectorCostType(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
          OBJ_CALL(value = self->object.getControl3DVectorCostType());
          return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__deltaVSat(t_ImpulseManeuver *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getDeltaVSat());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_ImpulseManeuver_get__isp(t_ImpulseManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ImpulseManeuver_get__trigger(t_ImpulseManeuver *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getTrigger());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/PythonMeasurementBuilder.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonMeasurementBuilder::class$ = NULL;
          jmethodID *PythonMeasurementBuilder::mids$ = NULL;
          bool PythonMeasurementBuilder::live$ = false;

          jclass PythonMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addModifier_6f472135bf397672] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_build_9bd3ff0754feb0c8] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getModifiers_0d9551367f7ecdef] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_b8c09fefa9db3b83] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementBuilder::PythonMeasurementBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonMeasurementBuilder::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonMeasurementBuilder::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonMeasurementBuilder::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args);
          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self);
          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args);
          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data);
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data);
          static PyGetSetDef t_PythonMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, self),
            DECLARE_GET_FIELD(t_PythonMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementBuilder, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementBuilder)[] = {
            { Py_tp_methods, t_PythonMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementBuilder_init_ },
            { Py_tp_getset, t_PythonMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementBuilder, t_PythonMeasurementBuilder, PythonMeasurementBuilder);
          PyObject *t_PythonMeasurementBuilder::wrap_Object(const PythonMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonMeasurementBuilder *self = (t_PythonMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementBuilder), &PY_TYPE_DEF(PythonMeasurementBuilder), module, "PythonMeasurementBuilder", 1);
          }

          void t_PythonMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "class_", make_descriptor(PythonMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "wrapfn_", make_descriptor(t_PythonMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementBuilder::initializeClass);
            JNINativeMethod methods[] = {
              { "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V", (void *) t_PythonMeasurementBuilder_addModifier0 },
              { "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/ObservedMeasurement;", (void *) t_PythonMeasurementBuilder_build1 },
              { "getModifiers", "()Ljava/util/List;", (void *) t_PythonMeasurementBuilder_getModifiers2 },
              { "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;", (void *) t_PythonMeasurementBuilder_getSatellites3 },
              { "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonMeasurementBuilder_init4 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementBuilder_pythonDecRef5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementBuilder::wrap_Object(PythonMeasurementBuilder(((t_PythonMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonMeasurementBuilder_of_(t_PythonMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonMeasurementBuilder_init_(t_PythonMeasurementBuilder *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementBuilder object((jobject) NULL);

            INT_CALL(object = PythonMeasurementBuilder());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementBuilder_finalize(t_PythonMeasurementBuilder *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementBuilder_pythonExtension(t_PythonMeasurementBuilder *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jlong result;
                OBJ_CALL(result = self->object.pythonExtension());
                return PyLong_FromLongLong((PY_LONG_LONG) result);
              }
              break;
             case 1:
              {
                jlong a0;

                if (!parseArgs(args, "J", &a0))
                {
                  OBJ_CALL(self->object.pythonExtension(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
            return NULL;
          }

          static void JNICALL t_PythonMeasurementBuilder_addModifier0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::estimation::measurements::t_EstimationModifier::wrap_Object(::org::orekit::estimation::measurements::EstimationModifier(a0));
            PyObject *result = PyObject_CallMethod(obj, "addModifier", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonMeasurementBuilder_build1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::java::util::t_Map::wrap_Object(::java::util::Map(a1));
            PyObject *result = PyObject_CallMethod(obj, "build", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &value))
            {
              throwTypeError("build", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonMeasurementBuilder_getModifiers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getModifiers", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getModifiers", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static jobject JNICALL t_PythonMeasurementBuilder_getSatellites3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSatellites", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "[k", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &value))
            {
              throwTypeError("getSatellites", result);
              Py_DECREF(result);
            }
            else
            {
              jobj = jenv->NewLocalRef(value.this$);
              Py_DECREF(result);
              return jobj;
            }

            return (jobject) NULL;
          }

          static void JNICALL t_PythonMeasurementBuilder_init4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonMeasurementBuilder_pythonDecRef5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementBuilder::mids$[PythonMeasurementBuilder::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementBuilder_get__self(t_PythonMeasurementBuilder *self, void *data)
          {
            jlong ptr;
            OBJ_CALL(ptr = self->object.pythonExtension());
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              Py_INCREF(obj);
              return obj;
            }
            else
              Py_RETURN_NONE;
          }
          static PyObject *t_PythonMeasurementBuilder_get__parameters_(t_PythonMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCombinedCorrectionData::class$ = NULL;
              jmethodID *RtcmCombinedCorrectionData::mids$ = NULL;
              bool RtcmCombinedCorrectionData::live$ = false;

              jclass RtcmCombinedCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_96d5462b84e1a874] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_412668abc8d889e9] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_58d117cad6f91792] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_cf572ee5ddb143ac] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_a3da1a935cb37f7b] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_9a400e8af37b7414] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCombinedCorrectionData::RtcmCombinedCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmCombinedCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_96d5462b84e1a874]));
              }

              jint RtcmCombinedCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_412668abc8d889e9]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmCombinedCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_58d117cad6f91792]));
              }

              void RtcmCombinedCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_cf572ee5ddb143ac], a0.this$);
              }

              void RtcmCombinedCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_a3da1a935cb37f7b], a0);
              }

              void RtcmCombinedCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_9a400e8af37b7414], a0.this$);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCombinedCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, clockCorrection),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, gnssIod),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCombinedCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setClockCorrection, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setGnssIod, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCombinedCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCombinedCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCombinedCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCombinedCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCombinedCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmCombinedCorrectionData, t_RtcmCombinedCorrectionData, RtcmCombinedCorrectionData);

              void t_RtcmCombinedCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCombinedCorrectionData), &PY_TYPE_DEF(RtcmCombinedCorrectionData), module, "RtcmCombinedCorrectionData", 0);
              }

              void t_RtcmCombinedCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "class_", make_descriptor(RtcmCombinedCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "wrapfn_", make_descriptor(t_RtcmCombinedCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCombinedCorrectionData::wrap_Object(RtcmCombinedCorrectionData(((t_RtcmCombinedCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCombinedCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCombinedCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setGnssIod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setGnssIod", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setOrbitCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setOrbitCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setGnssIod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "gnssIod", arg);
                return -1;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::OrbitCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setOrbitCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "orbitCorrection", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
