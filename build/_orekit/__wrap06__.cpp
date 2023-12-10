#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldTransformGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldTransformGenerator::class$ = NULL;
      jmethodID *FieldTransformGenerator::mids$ = NULL;
      bool FieldTransformGenerator::live$ = false;

      jclass FieldTransformGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldTransformGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_220e84d724c5b9fb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_b7149ea6787a6f3c] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransformGenerator::FieldTransformGenerator(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::frames::TransformProvider & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_220e84d724c5b9fb, a0.this$, a1, a2.this$, a3)) {}

      ::java::util::List FieldTransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_b7149ea6787a6f3c], a0.this$, a1.this$));
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
      static PyObject *t_FieldTransformGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransformGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransformGenerator_of_(t_FieldTransformGenerator *self, PyObject *args);
      static int t_FieldTransformGenerator_init_(t_FieldTransformGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTransformGenerator_generate(t_FieldTransformGenerator *self, PyObject *args);
      static PyObject *t_FieldTransformGenerator_get__parameters_(t_FieldTransformGenerator *self, void *data);
      static PyGetSetDef t_FieldTransformGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTransformGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTransformGenerator__methods_[] = {
        DECLARE_METHOD(t_FieldTransformGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransformGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransformGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransformGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTransformGenerator)[] = {
        { Py_tp_methods, t_FieldTransformGenerator__methods_ },
        { Py_tp_init, (void *) t_FieldTransformGenerator_init_ },
        { Py_tp_getset, t_FieldTransformGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTransformGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTransformGenerator, t_FieldTransformGenerator, FieldTransformGenerator);
      PyObject *t_FieldTransformGenerator::wrap_Object(const FieldTransformGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransformGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransformGenerator *self = (t_FieldTransformGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTransformGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransformGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransformGenerator *self = (t_FieldTransformGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTransformGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTransformGenerator), &PY_TYPE_DEF(FieldTransformGenerator), module, "FieldTransformGenerator", 0);
      }

      void t_FieldTransformGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "class_", make_descriptor(FieldTransformGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "wrapfn_", make_descriptor(t_FieldTransformGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTransformGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTransformGenerator::initializeClass, 1)))
          return NULL;
        return t_FieldTransformGenerator::wrap_Object(FieldTransformGenerator(((t_FieldTransformGenerator *) arg)->object.this$));
      }
      static PyObject *t_FieldTransformGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTransformGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTransformGenerator_of_(t_FieldTransformGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTransformGenerator_init_(t_FieldTransformGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::orekit::frames::TransformProvider a2((jobject) NULL);
        jdouble a3;
        FieldTransformGenerator object((jobject) NULL);

        if (!parseArgs(args, "KIkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
        {
          INT_CALL(object = FieldTransformGenerator(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTransformGenerator_generate(t_FieldTransformGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
      static PyObject *t_FieldTransformGenerator_get__parameters_(t_FieldTransformGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace carlson {

          ::java::lang::Class *CarlsonEllipticIntegral::class$ = NULL;
          jmethodID *CarlsonEllipticIntegral::mids$ = NULL;
          bool CarlsonEllipticIntegral::live$ = false;

          jclass CarlsonEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_rC_b90fd2ae3b76ce9e] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rC_85c7af728c9b8762] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rC_824133ce4aec3505] = env->getStaticMethodID(cls, "rC", "(DD)D");
              mids$[mid_rC_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rD_8713168363f00e29] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rD_391473110206afe5] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rD_c564d6ace53a5934] = env->getStaticMethodID(cls, "rD", "(DDD)D");
              mids$[mid_rD_f56548599899c286] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rF_8713168363f00e29] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rF_391473110206afe5] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rF_c564d6ace53a5934] = env->getStaticMethodID(cls, "rF", "(DDD)D");
              mids$[mid_rF_f56548599899c286] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rG_8713168363f00e29] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rG_391473110206afe5] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rG_c564d6ace53a5934] = env->getStaticMethodID(cls, "rG", "(DDD)D");
              mids$[mid_rG_f56548599899c286] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_e56cc6846d200191] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_7ad503e18c9c5784] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_04175aacb25dae17] = env->getStaticMethodID(cls, "rJ", "(DDDD)D");
              mids$[mid_rJ_0062d53dab8088fa] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_62031dc9e2270dfc] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_d9d3f442502408c2] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_6f404d1d063cb80e] = env->getStaticMethodID(cls, "rJ", "(DDDDD)D");
              mids$[mid_rJ_2f08b5e2102d607f] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rC_b90fd2ae3b76ce9e], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rC_85c7af728c9b8762], a0.this$, a1.this$));
          }

          jdouble CarlsonEllipticIntegral::rC(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rC_824133ce4aec3505], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rC(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rC_75c7ce7d33e7324b], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rD_8713168363f00e29], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rD_391473110206afe5], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rD(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rD_c564d6ace53a5934], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rD_f56548599899c286], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rF_8713168363f00e29], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rF_391473110206afe5], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rF(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rF_c564d6ace53a5934], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rF_f56548599899c286], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rG_8713168363f00e29], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rG_391473110206afe5], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rG(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rG_c564d6ace53a5934], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rG(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rG_f56548599899c286], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_e56cc6846d200191], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_7ad503e18c9c5784], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_04175aacb25dae17], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_0062d53dab8088fa], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3, const ::org::hipparchus::complex::Complex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_62031dc9e2270dfc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3, const ::org::hipparchus::complex::FieldComplex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_d9d3f442502408c2], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_6f404d1d063cb80e], a0, a1, a2, a3, a4);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_2f08b5e2102d607f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
    namespace special {
      namespace elliptic {
        namespace carlson {
          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_CarlsonEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_CarlsonEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rC, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rG, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rJ, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CarlsonEllipticIntegral)[] = {
            { Py_tp_methods, t_CarlsonEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CarlsonEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CarlsonEllipticIntegral, t_CarlsonEllipticIntegral, CarlsonEllipticIntegral);

          void t_CarlsonEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(CarlsonEllipticIntegral), &PY_TYPE_DEF(CarlsonEllipticIntegral), module, "CarlsonEllipticIntegral", 0);
          }

          void t_CarlsonEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "class_", make_descriptor(CarlsonEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "wrapfn_", make_descriptor(t_CarlsonEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CarlsonEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_CarlsonEllipticIntegral::wrap_Object(CarlsonEllipticIntegral(((t_CarlsonEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CarlsonEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rC", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rD", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rF", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rG", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
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
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex a4((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a4, &p4, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble result;

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
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
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rJ", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *AbstractSimplex::class$ = NULL;
            jmethodID *AbstractSimplex::mids$ = NULL;
            bool AbstractSimplex::live$ = false;

            jclass AbstractSimplex::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/AbstractSimplex");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_ebc26dcaf4761286] = env->getMethodID(cls, "build", "([D)V");
                mids$[mid_evaluate_cd2534a55381d07e] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
                mids$[mid_getPoint_2caeff5883144a87] = env->getMethodID(cls, "getPoint", "(I)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getPoints_5cdf4d4dfeae2fec] = env->getMethodID(cls, "getPoints", "()[Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_getSize_f2f64475e4580546] = env->getMethodID(cls, "getSize", "()I");
                mids$[mid_iterate_cd2534a55381d07e] = env->getMethodID(cls, "iterate", "(Lorg/hipparchus/analysis/MultivariateFunction;Ljava/util/Comparator;)V");
                mids$[mid_replaceWorstPoint_68b22a7b495298c1] = env->getMethodID(cls, "replaceWorstPoint", "(Lorg/hipparchus/optim/PointValuePair;Ljava/util/Comparator;)V");
                mids$[mid_setPoint_810a74856aeb1bc9] = env->getMethodID(cls, "setPoint", "(ILorg/hipparchus/optim/PointValuePair;)V");
                mids$[mid_setPoints_f1666427a209dea9] = env->getMethodID(cls, "setPoints", "([Lorg/hipparchus/optim/PointValuePair;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractSimplex::build(const JArray< jdouble > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_build_ebc26dcaf4761286], a0.this$);
            }

            void AbstractSimplex::evaluate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_evaluate_cd2534a55381d07e], a0.this$, a1.this$);
            }

            jint AbstractSimplex::getDimension() const
            {
              return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
            }

            ::org::hipparchus::optim::PointValuePair AbstractSimplex::getPoint(jint a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_getPoint_2caeff5883144a87], a0));
            }

            JArray< ::org::hipparchus::optim::PointValuePair > AbstractSimplex::getPoints() const
            {
              return JArray< ::org::hipparchus::optim::PointValuePair >(env->callObjectMethod(this$, mids$[mid_getPoints_5cdf4d4dfeae2fec]));
            }

            jint AbstractSimplex::getSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getSize_f2f64475e4580546]);
            }

            void AbstractSimplex::iterate(const ::org::hipparchus::analysis::MultivariateFunction & a0, const ::java::util::Comparator & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_iterate_cd2534a55381d07e], a0.this$, a1.this$);
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg);
            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self);
            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args);
            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data);
            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data);
            static PyGetSetDef t_AbstractSimplex__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractSimplex, dimension),
              DECLARE_GET_FIELD(t_AbstractSimplex, points),
              DECLARE_GET_FIELD(t_AbstractSimplex, size),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractSimplex__methods_[] = {
              DECLARE_METHOD(t_AbstractSimplex, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractSimplex, build, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, evaluate, METH_VARARGS),
              DECLARE_METHOD(t_AbstractSimplex, getDimension, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getPoint, METH_O),
              DECLARE_METHOD(t_AbstractSimplex, getPoints, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, getSize, METH_NOARGS),
              DECLARE_METHOD(t_AbstractSimplex, iterate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractSimplex)[] = {
              { Py_tp_methods, t_AbstractSimplex__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractSimplex__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractSimplex)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractSimplex, t_AbstractSimplex, AbstractSimplex);

            void t_AbstractSimplex::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractSimplex), &PY_TYPE_DEF(AbstractSimplex), module, "AbstractSimplex", 0);
            }

            void t_AbstractSimplex::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "class_", make_descriptor(AbstractSimplex::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "wrapfn_", make_descriptor(t_AbstractSimplex::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSimplex), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractSimplex_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractSimplex::initializeClass, 1)))
                return NULL;
              return t_AbstractSimplex::wrap_Object(AbstractSimplex(((t_AbstractSimplex *) arg)->object.this$));
            }
            static PyObject *t_AbstractSimplex_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractSimplex::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractSimplex_build(t_AbstractSimplex *self, PyObject *arg)
            {
              JArray< jdouble > a0((jobject) NULL);

              if (!parseArg(arg, "[D", &a0))
              {
                OBJ_CALL(self->object.build(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "build", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_evaluate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.evaluate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "evaluate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getDimension(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDimension());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_getPoint(t_AbstractSimplex *self, PyObject *arg)
            {
              jint a0;
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPoint(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getPoint", arg);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_getPoints(t_AbstractSimplex *self)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoints());
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_getSize(t_AbstractSimplex *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSize());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AbstractSimplex_iterate(t_AbstractSimplex *self, PyObject *args)
            {
              ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
              ::java::util::Comparator a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "kK", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
              {
                OBJ_CALL(self->object.iterate(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "iterate", args);
              return NULL;
            }

            static PyObject *t_AbstractSimplex_get__dimension(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDimension());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AbstractSimplex_get__points(t_AbstractSimplex *self, void *data)
            {
              JArray< ::org::hipparchus::optim::PointValuePair > value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoints());
              return JArray<jobject>(value.this$).wrap(::org::hipparchus::optim::t_PointValuePair::wrap_jobject);
            }

            static PyObject *t_AbstractSimplex_get__size(t_AbstractSimplex *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSize());
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
#include "org/hipparchus/linear/PreconditionedIterativeLinearSolver.h"
#include "org/hipparchus/util/IterationManager.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *PreconditionedIterativeLinearSolver::class$ = NULL;
      jmethodID *PreconditionedIterativeLinearSolver::mids$ = NULL;
      bool PreconditionedIterativeLinearSolver::live$ = false;

      jclass PreconditionedIterativeLinearSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/PreconditionedIterativeLinearSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_96d20dd3d7b62ec2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/IterationManager;)V");
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_solve_2d301f1e49d9c390] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_52b5cc8d60bfdcba] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_55921fcd14d39e3f] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solve_914768267c38d49b] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_52b5cc8d60bfdcba] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_solveInPlace_914768267c38d49b] = env->getMethodID(cls, "solveInPlace", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_checkParameters_f0802c57438f99ba] = env->getStaticMethodID(cls, "checkParameters", "(Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealLinearOperator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(const ::org::hipparchus::util::IterationManager & a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_96d20dd3d7b62ec2, a0.this$)) {}

      PreconditionedIterativeLinearSolver::PreconditionedIterativeLinearSolver(jint a0) : ::org::hipparchus::linear::IterativeLinearSolver(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_2d301f1e49d9c390], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_52b5cc8d60bfdcba], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_55921fcd14d39e3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solve(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solve_914768267c38d49b], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_52b5cc8d60bfdcba], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::linear::RealVector PreconditionedIterativeLinearSolver::solveInPlace(const ::org::hipparchus::linear::RealLinearOperator & a0, const ::org::hipparchus::linear::RealLinearOperator & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealVector & a3) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_solveInPlace_914768267c38d49b], a0.this$, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args);
      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args);

      static PyMethodDef t_PreconditionedIterativeLinearSolver__methods_[] = {
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solve, METH_VARARGS),
        DECLARE_METHOD(t_PreconditionedIterativeLinearSolver, solveInPlace, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PreconditionedIterativeLinearSolver)[] = {
        { Py_tp_methods, t_PreconditionedIterativeLinearSolver__methods_ },
        { Py_tp_init, (void *) t_PreconditionedIterativeLinearSolver_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PreconditionedIterativeLinearSolver)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::IterativeLinearSolver),
        NULL
      };

      DEFINE_TYPE(PreconditionedIterativeLinearSolver, t_PreconditionedIterativeLinearSolver, PreconditionedIterativeLinearSolver);

      void t_PreconditionedIterativeLinearSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(PreconditionedIterativeLinearSolver), &PY_TYPE_DEF(PreconditionedIterativeLinearSolver), module, "PreconditionedIterativeLinearSolver", 0);
      }

      void t_PreconditionedIterativeLinearSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "class_", make_descriptor(PreconditionedIterativeLinearSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "wrapfn_", make_descriptor(t_PreconditionedIterativeLinearSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PreconditionedIterativeLinearSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 1)))
          return NULL;
        return t_PreconditionedIterativeLinearSolver::wrap_Object(PreconditionedIterativeLinearSolver(((t_PreconditionedIterativeLinearSolver *) arg)->object.this$));
      }
      static PyObject *t_PreconditionedIterativeLinearSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PreconditionedIterativeLinearSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PreconditionedIterativeLinearSolver_init_(t_PreconditionedIterativeLinearSolver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::util::IterationManager a0((jobject) NULL);
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::util::IterationManager::initializeClass, &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            PreconditionedIterativeLinearSolver object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = PreconditionedIterativeLinearSolver(a0));
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

      static PyObject *t_PreconditionedIterativeLinearSolver_solve(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.solve(a0, a1));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solve(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solve", args, 2);
      }

      static PyObject *t_PreconditionedIterativeLinearSolver_solveInPlace(t_PreconditionedIterativeLinearSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealVector a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::hipparchus::linear::RealLinearOperator a0((jobject) NULL);
            ::org::hipparchus::linear::RealLinearOperator a1((jobject) NULL);
            ::org::hipparchus::linear::RealVector a2((jobject) NULL);
            ::org::hipparchus::linear::RealVector a3((jobject) NULL);
            ::org::hipparchus::linear::RealVector result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealLinearOperator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.solveInPlace(a0, a1, a2, a3));
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(PreconditionedIterativeLinearSolver), (PyObject *) self, "solveInPlace", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdaptableInterval::class$ = NULL;
        jmethodID *FieldAdaptableInterval::mids$ = NULL;
        bool FieldAdaptableInterval::live$ = false;

        jclass FieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_be4460dcb2e9b516] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_be4460dcb2e9b516], a0.this$);
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
        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args);
        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_FieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_FieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdaptableInterval)[] = {
          { Py_tp_methods, t_FieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdaptableInterval, t_FieldAdaptableInterval, FieldAdaptableInterval);
        PyObject *t_FieldAdaptableInterval::wrap_Object(const FieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdaptableInterval), &PY_TYPE_DEF(FieldAdaptableInterval), module, "FieldAdaptableInterval", 0);
        }

        void t_FieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "class_", make_descriptor(FieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "wrapfn_", make_descriptor(t_FieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_FieldAdaptableInterval::wrap_Object(FieldAdaptableInterval(((t_FieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/TDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *TDistribution::class$ = NULL;
        jmethodID *TDistribution::mids$ = NULL;
        bool TDistribution::live$ = false;

        jclass TDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/TDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_456d9a2f64d6b28d] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TDistribution::TDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        TDistribution::TDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble TDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble TDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble TDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_456d9a2f64d6b28d]);
        }

        jdouble TDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble TDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble TDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble TDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jboolean TDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble TDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
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
        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self);
        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args);
        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data);
        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data);
        static PyGetSetDef t_TDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_TDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_TDistribution, numericalMean),
          DECLARE_GET_FIELD(t_TDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_TDistribution, supportConnected),
          DECLARE_GET_FIELD(t_TDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_TDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TDistribution__methods_[] = {
          DECLARE_METHOD(t_TDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_TDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TDistribution)[] = {
          { Py_tp_methods, t_TDistribution__methods_ },
          { Py_tp_init, (void *) t_TDistribution_init_ },
          { Py_tp_getset, t_TDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(TDistribution, t_TDistribution, TDistribution);

        void t_TDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(TDistribution), &PY_TYPE_DEF(TDistribution), module, "TDistribution", 0);
        }

        void t_TDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "class_", make_descriptor(TDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "wrapfn_", make_descriptor(t_TDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TDistribution::initializeClass, 1)))
            return NULL;
          return t_TDistribution::wrap_Object(TDistribution(((t_TDistribution *) arg)->object.this$));
        }
        static PyObject *t_TDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TDistribution_init_(t_TDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = TDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              TDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = TDistribution(a0, a1));
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

        static PyObject *t_TDistribution_cumulativeProbability(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_TDistribution_density(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_TDistribution_getDegreesOfFreedom(t_TDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_TDistribution_getNumericalMean(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_TDistribution_getNumericalVariance(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_TDistribution_getSupportLowerBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_TDistribution_getSupportUpperBound(t_TDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_TDistribution_isSupportConnected(t_TDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_TDistribution_logDensity(t_TDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(TDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_TDistribution_get__degreesOfFreedom(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalMean(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__numericalVariance(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportConnected(t_TDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_TDistribution_get__supportLowerBound(t_TDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_TDistribution_get__supportUpperBound(t_TDistribution *self, void *data)
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
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "java/lang/Class.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScales::class$ = NULL;
      jmethodID *TimeScales::mids$ = NULL;
      bool TimeScales::live$ = false;

      jclass TimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_createBesselianEpoch_a76f1ca2cc1b76e5] = env->getMethodID(cls, "createBesselianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_createJulianEpoch_a76f1ca2cc1b76e5] = env->getMethodID(cls, "createJulianEpoch", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getBDT_deaa012966748070] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getBeidouEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getBeidouEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getCcsdsEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getCcsdsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFiftiesEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getFiftiesEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFutureInfinity_aaa854c403487cf3] = env->getMethodID(cls, "getFutureInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGLONASS_c91e99b6d55c6edd] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_9d529a30e942a554] = env->getMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_c3529b957726f144] = env->getMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_11ee1ca64364e897] = env->getMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getGalileoEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getGalileoEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGlonassEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getGlonassEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getGpsEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getGpsEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getIRNSS_ec0466e710e3daab] = env->getMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getIrnssEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getIrnssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJ2000Epoch_aaa854c403487cf3] = env->getMethodID(cls, "getJ2000Epoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJavaEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getJavaEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getJulianEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getModifiedJulianEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getModifiedJulianEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getPastInfinity_aaa854c403487cf3] = env->getMethodID(cls, "getPastInfinity", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getQZSS_7f540f12419eda56] = env->getMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getQzssEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getQzssEpoch", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTAI_9316322b62b6b656] = env->getMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_2460e78d331af28f] = env->getMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_30aeac15cc80b3c1] = env->getMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_0bcc4110bc5be1d2] = env->getMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_9be074c5a298fe1e] = env->getMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getUT1_603d1058a5002a04] = env->getMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_ed870393143e8ecb] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createBesselianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createBesselianEpoch_a76f1ca2cc1b76e5], a0));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::createJulianEpoch(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_createJulianEpoch_a76f1ca2cc1b76e5], a0));
      }

      ::org::orekit::time::BDTScale TimeScales::getBDT() const
      {
        return ::org::orekit::time::BDTScale(env->callObjectMethod(this$, mids$[mid_getBDT_deaa012966748070]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getBeidouEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getBeidouEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getCcsdsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCcsdsEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFiftiesEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFiftiesEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getFutureInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFutureInfinity_aaa854c403487cf3]));
      }

      ::org::orekit::time::GLONASSScale TimeScales::getGLONASS() const
      {
        return ::org::orekit::time::GLONASSScale(env->callObjectMethod(this$, mids$[mid_getGLONASS_c91e99b6d55c6edd]));
      }

      ::org::orekit::time::GMSTScale TimeScales::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::GMSTScale(env->callObjectMethod(this$, mids$[mid_getGMST_9d529a30e942a554], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScales::getGPS() const
      {
        return ::org::orekit::time::GPSScale(env->callObjectMethod(this$, mids$[mid_getGPS_c3529b957726f144]));
      }

      ::org::orekit::time::GalileoScale TimeScales::getGST() const
      {
        return ::org::orekit::time::GalileoScale(env->callObjectMethod(this$, mids$[mid_getGST_11ee1ca64364e897]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGalileoEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGalileoEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGlonassEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGlonassEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getGpsEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getGpsEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::IRNSSScale TimeScales::getIRNSS() const
      {
        return ::org::orekit::time::IRNSSScale(env->callObjectMethod(this$, mids$[mid_getIRNSS_ec0466e710e3daab]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getIrnssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getIrnssEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJ2000Epoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJ2000Epoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJavaEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJavaEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getJulianEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getModifiedJulianEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getModifiedJulianEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getPastInfinity() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getPastInfinity_aaa854c403487cf3]));
      }

      ::org::orekit::time::QZSSScale TimeScales::getQZSS() const
      {
        return ::org::orekit::time::QZSSScale(env->callObjectMethod(this$, mids$[mid_getQZSS_7f540f12419eda56]));
      }

      ::org::orekit::time::AbsoluteDate TimeScales::getQzssEpoch() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getQzssEpoch_aaa854c403487cf3]));
      }

      ::org::orekit::time::TAIScale TimeScales::getTAI() const
      {
        return ::org::orekit::time::TAIScale(env->callObjectMethod(this$, mids$[mid_getTAI_9316322b62b6b656]));
      }

      ::org::orekit::time::TCBScale TimeScales::getTCB() const
      {
        return ::org::orekit::time::TCBScale(env->callObjectMethod(this$, mids$[mid_getTCB_2460e78d331af28f]));
      }

      ::org::orekit::time::TCGScale TimeScales::getTCG() const
      {
        return ::org::orekit::time::TCGScale(env->callObjectMethod(this$, mids$[mid_getTCG_30aeac15cc80b3c1]));
      }

      ::org::orekit::time::TDBScale TimeScales::getTDB() const
      {
        return ::org::orekit::time::TDBScale(env->callObjectMethod(this$, mids$[mid_getTDB_0bcc4110bc5be1d2]));
      }

      ::org::orekit::time::TTScale TimeScales::getTT() const
      {
        return ::org::orekit::time::TTScale(env->callObjectMethod(this$, mids$[mid_getTT_9be074c5a298fe1e]));
      }

      ::org::orekit::time::UT1Scale TimeScales::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_603d1058a5002a04], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScales::getUTC() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTC_ed870393143e8ecb]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg);
      static PyObject *t_TimeScales_getBDT(t_TimeScales *self);
      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getGPS(t_TimeScales *self);
      static PyObject *t_TimeScales_getGST(t_TimeScales *self);
      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self);
      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self);
      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self);
      static PyObject *t_TimeScales_getTAI(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTCG(t_TimeScales *self);
      static PyObject *t_TimeScales_getTDB(t_TimeScales *self);
      static PyObject *t_TimeScales_getTT(t_TimeScales *self);
      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args);
      static PyObject *t_TimeScales_getUTC(t_TimeScales *self);
      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data);
      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data);
      static PyGetSetDef t_TimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScales, bDT),
        DECLARE_GET_FIELD(t_TimeScales, beidouEpoch),
        DECLARE_GET_FIELD(t_TimeScales, ccsdsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, fiftiesEpoch),
        DECLARE_GET_FIELD(t_TimeScales, futureInfinity),
        DECLARE_GET_FIELD(t_TimeScales, gLONASS),
        DECLARE_GET_FIELD(t_TimeScales, gPS),
        DECLARE_GET_FIELD(t_TimeScales, gST),
        DECLARE_GET_FIELD(t_TimeScales, galileoEpoch),
        DECLARE_GET_FIELD(t_TimeScales, glonassEpoch),
        DECLARE_GET_FIELD(t_TimeScales, gpsEpoch),
        DECLARE_GET_FIELD(t_TimeScales, iRNSS),
        DECLARE_GET_FIELD(t_TimeScales, irnssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, j2000Epoch),
        DECLARE_GET_FIELD(t_TimeScales, javaEpoch),
        DECLARE_GET_FIELD(t_TimeScales, julianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, modifiedJulianEpoch),
        DECLARE_GET_FIELD(t_TimeScales, pastInfinity),
        DECLARE_GET_FIELD(t_TimeScales, qZSS),
        DECLARE_GET_FIELD(t_TimeScales, qzssEpoch),
        DECLARE_GET_FIELD(t_TimeScales, tAI),
        DECLARE_GET_FIELD(t_TimeScales, tCB),
        DECLARE_GET_FIELD(t_TimeScales, tCG),
        DECLARE_GET_FIELD(t_TimeScales, tDB),
        DECLARE_GET_FIELD(t_TimeScales, tT),
        DECLARE_GET_FIELD(t_TimeScales, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScales__methods_[] = {
        DECLARE_METHOD(t_TimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScales, createBesselianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, createJulianEpoch, METH_O),
        DECLARE_METHOD(t_TimeScales, getBDT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getBeidouEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getCcsdsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFiftiesEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getFutureInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGLONASS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGMST, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getGPS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGST, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGalileoEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGlonassEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getGpsEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIRNSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getIrnssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJ2000Epoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJavaEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getModifiedJulianEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getPastInfinity, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQZSS, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getQzssEpoch, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTAI, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTCG, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTDB, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getTT, METH_NOARGS),
        DECLARE_METHOD(t_TimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_TimeScales, getUTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScales)[] = {
        { Py_tp_methods, t_TimeScales__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScales)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScales, t_TimeScales, TimeScales);

      void t_TimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScales), &PY_TYPE_DEF(TimeScales), module, "TimeScales", 0);
      }

      void t_TimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "class_", make_descriptor(TimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "wrapfn_", make_descriptor(t_TimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScales), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScales::initializeClass, 1)))
          return NULL;
        return t_TimeScales::wrap_Object(TimeScales(((t_TimeScales *) arg)->object.this$));
      }
      static PyObject *t_TimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScales_createBesselianEpoch(t_TimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createBesselianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createBesselianEpoch", arg);
        return NULL;
      }

      static PyObject *t_TimeScales_createJulianEpoch(t_TimeScales *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.createJulianEpoch(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "createJulianEpoch", arg);
        return NULL;
      }

      static PyObject *t_TimeScales_getBDT(t_TimeScales *self)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getBeidouEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getCcsdsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFiftiesEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getFutureInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGLONASS(t_TimeScales *self)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGMST(t_TimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getGMST", args);
        return NULL;
      }

      static PyObject *t_TimeScales_getGPS(t_TimeScales *self)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGST(t_TimeScales *self)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGalileoEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGlonassEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getGpsEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIRNSS(t_TimeScales *self)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getIrnssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJ2000Epoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJavaEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getModifiedJulianEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getPastInfinity(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQZSS(t_TimeScales *self)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getQzssEpoch(t_TimeScales *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTAI(t_TimeScales *self)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCB(t_TimeScales *self)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTCG(t_TimeScales *self)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTDB(t_TimeScales *self)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getTT(t_TimeScales *self)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_getUT1(t_TimeScales *self, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getUT1(a0, a1));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getUT1", args);
        return NULL;
      }

      static PyObject *t_TimeScales_getUTC(t_TimeScales *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_TimeScales_get__bDT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__beidouEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getBeidouEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__ccsdsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getCcsdsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__fiftiesEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFiftiesEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__futureInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFutureInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gLONASS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gPS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gST(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__galileoEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGalileoEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__glonassEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGlonassEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__gpsEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getGpsEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__iRNSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__irnssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getIrnssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__j2000Epoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJ2000Epoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__javaEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJavaEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__julianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__modifiedJulianEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getModifiedJulianEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__pastInfinity(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getPastInfinity());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qZSS(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__qzssEpoch(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getQzssEpoch());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tAI(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tCG(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tDB(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__tT(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScales_get__uTC(t_TimeScales *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonPropagatorBuilder::class$ = NULL;
        jmethodID *PythonPropagatorBuilder::mids$ = NULL;
        bool PythonPropagatorBuilder::live$ = false;

        jclass PythonPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildLeastSquaresModel_31c4fcde5bc19fc3] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_d397e255f9fb16e6] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_6e20699935a1c88e] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_aaa854c403487cf3] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_eb9e6df280c6daa0] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_eb9e6df280c6daa0] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_7cdc325af0834901] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetOrbit_e5b8a6a44355183e] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorBuilder::PythonPropagatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonPropagatorBuilder::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace conversion {
        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self);
        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPropagatorBuilder, t_PythonPropagatorBuilder, PythonPropagatorBuilder);

        void t_PythonPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPropagatorBuilder), &PY_TYPE_DEF(PythonPropagatorBuilder), module, "PythonPropagatorBuilder", 1);
        }

        void t_PythonPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "class_", make_descriptor(PythonPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonPropagatorBuilder_copy2 },
            { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonPropagatorBuilder_getFrame3 },
            { "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonPropagatorBuilder_getInitialOrbitDate4 },
            { "getMu", "()D", (void *) t_PythonPropagatorBuilder_getMu5 },
            { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonPropagatorBuilder_getOrbitType6 },
            { "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getOrbitalParametersDrivers7 },
            { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonPropagatorBuilder_getPositionAngleType8 },
            { "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getPropagationParametersDrivers9 },
            { "getSelectedNormalizedParameters", "()[D", (void *) t_PythonPropagatorBuilder_getSelectedNormalizedParameters10 },
            { "pythonDecRef", "()V", (void *) t_PythonPropagatorBuilder_pythonDecRef11 },
            { "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V", (void *) t_PythonPropagatorBuilder_resetOrbit12 },
          };
          env->registerNatives(cls, methods, 13);
        }

        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonPropagatorBuilder::wrap_Object(PythonPropagatorBuilder(((t_PythonPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonPropagatorBuilder object((jobject) NULL);

          INT_CALL(object = PythonPropagatorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel value((jobject) NULL);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::propagation::conversion::t_PropagatorBuilder::wrap_jobject);
          PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
          PyObject *o2 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a2));
          PyObject *o3 = ::org::orekit::estimation::leastsquares::t_ModelObserver::wrap_Object(::org::orekit::estimation::leastsquares::ModelObserver(a3));
          PyObject *result = PyObject_CallMethod(obj, "buildLeastSquaresModel", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::initializeClass, &value))
          {
            throwTypeError("buildLeastSquaresModel", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = JArray<jdouble>(a0).wrap();
          PyObject *result = PyObject_CallMethod(obj, "buildPropagator", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("buildPropagator", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::conversion::PropagatorBuilder value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "copy", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &value))
          {
            throwTypeError("copy", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::frames::Frame value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
          {
            throwTypeError("getFrame", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getInitialOrbitDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getInitialOrbitDate", result);
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

        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMu", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMu", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
          {
            throwTypeError("getOrbitType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitalParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getOrbitalParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
          {
            throwTypeError("getPositionAngleType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPropagationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getPropagationParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedNormalizedParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getSelectedNormalizedParameters", result);
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

        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
          PyObject *result = PyObject_CallMethod(obj, "resetOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersRangeModifier::class$ = NULL;
          jmethodID *PhaseCentersRangeModifier::mids$ = NULL;
          bool PhaseCentersRangeModifier::live$ = false;

          jclass PhaseCentersRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_55b30db589ada038] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersRangeModifier::PhaseCentersRangeModifier(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_55b30db589ada038, a0.this$, a1.this$)) {}

          ::java::util::List PhaseCentersRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void PhaseCentersRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
        namespace modifiers {
          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self);
          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg);
          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data);
          static PyGetSetDef t_PhaseCentersRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseCentersRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseCentersRangeModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseCentersRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersRangeModifier)[] = {
            { Py_tp_methods, t_PhaseCentersRangeModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersRangeModifier_init_ },
            { Py_tp_getset, t_PhaseCentersRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersRangeModifier, t_PhaseCentersRangeModifier, PhaseCentersRangeModifier);

          void t_PhaseCentersRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersRangeModifier), &PY_TYPE_DEF(PhaseCentersRangeModifier), module, "PhaseCentersRangeModifier", 0);
          }

          void t_PhaseCentersRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "class_", make_descriptor(PhaseCentersRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "wrapfn_", make_descriptor(t_PhaseCentersRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersRangeModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersRangeModifier::wrap_Object(PhaseCentersRangeModifier(((t_PhaseCentersRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersRangeModifier_init_(t_PhaseCentersRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersRangeModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersRangeModifier_getParametersDrivers(t_PhaseCentersRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseCentersRangeModifier_modifyWithoutDerivatives(t_PhaseCentersRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_PhaseCentersRangeModifier_get__parametersDrivers(t_PhaseCentersRangeModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldAbstractAnalyticalPropagator::class$ = NULL;
        jmethodID *FieldAbstractAnalyticalPropagator::mids$ = NULL;
        bool FieldAbstractAnalyticalPropagator::live$ = false;

        jclass FieldAbstractAnalyticalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addEventDetector_1843b26af41f9c8e] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_clearEventsDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventsDetectors", "()V");
            mids$[mid_getEphemerisGenerator_a9ea70419e870eb4] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/FieldEphemerisGenerator;");
            mids$[mid_getEventsDetectors_cfcfd130f9013e3e] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
            mids$[mid_getPvProvider_d265659654cb169e] = env->getMethodID(cls, "getPvProvider", "()Lorg/orekit/utils/FieldPVCoordinatesProvider;");
            mids$[mid_propagate_195e701ebc75aca3] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_acceptStep_e9cb6d3ab49cffdb] = env->getMethodID(cls, "acceptStep", "(Lorg/orekit/propagation/analytical/FieldAbstractAnalyticalPropagator$FieldBasicStepInterpolator;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");
            mids$[mid_getMass_7bc0fd76ee915b72] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_c76342d42407aa3d] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
            mids$[mid_propagateOrbit_edf76d94987be4ff] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
            mids$[mid_basicPropagate_85b5a3e9101d7c1f] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/propagation/FieldSpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldAbstractAnalyticalPropagator::addEventDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEventDetector_1843b26af41f9c8e], a0.this$);
        }

        void FieldAbstractAnalyticalPropagator::clearEventsDetectors() const
        {
          env->callVoidMethod(this$, mids$[mid_clearEventsDetectors_7ae3461a92a43152]);
        }

        ::org::orekit::propagation::FieldEphemerisGenerator FieldAbstractAnalyticalPropagator::getEphemerisGenerator() const
        {
          return ::org::orekit::propagation::FieldEphemerisGenerator(env->callObjectMethod(this$, mids$[mid_getEphemerisGenerator_a9ea70419e870eb4]));
        }

        ::java::util::Collection FieldAbstractAnalyticalPropagator::getEventsDetectors() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getEventsDetectors_cfcfd130f9013e3e]));
        }

        ::org::orekit::utils::FieldPVCoordinatesProvider FieldAbstractAnalyticalPropagator::getPvProvider() const
        {
          return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPvProvider_d265659654cb169e]));
        }

        ::org::orekit::propagation::FieldSpacecraftState FieldAbstractAnalyticalPropagator::propagate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_propagate_195e701ebc75aca3], a0.this$, a1.this$));
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
      namespace analytical {
        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self);
        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data);
        static PyGetSetDef t_FieldAbstractAnalyticalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, ephemerisGenerator),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, eventsDetectors),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, pvProvider),
          DECLARE_GET_FIELD(t_FieldAbstractAnalyticalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractAnalyticalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, addEventDetector, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, clearEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEphemerisGenerator, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getEventsDetectors, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, getPvProvider, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractAnalyticalPropagator, propagate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractAnalyticalPropagator)[] = {
          { Py_tp_methods, t_FieldAbstractAnalyticalPropagator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractAnalyticalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractAnalyticalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::FieldAbstractPropagator),
          NULL
        };

        DEFINE_TYPE(FieldAbstractAnalyticalPropagator, t_FieldAbstractAnalyticalPropagator, FieldAbstractAnalyticalPropagator);
        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_Object(const FieldAbstractAnalyticalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAbstractAnalyticalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAbstractAnalyticalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractAnalyticalPropagator *self = (t_FieldAbstractAnalyticalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAbstractAnalyticalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractAnalyticalPropagator), &PY_TYPE_DEF(FieldAbstractAnalyticalPropagator), module, "FieldAbstractAnalyticalPropagator", 0);
        }

        void t_FieldAbstractAnalyticalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "class_", make_descriptor(FieldAbstractAnalyticalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "wrapfn_", make_descriptor(t_FieldAbstractAnalyticalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractAnalyticalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractAnalyticalPropagator::wrap_Object(FieldAbstractAnalyticalPropagator(((t_FieldAbstractAnalyticalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractAnalyticalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_of_(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_addEventDetector(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            OBJ_CALL(self->object.addEventDetector(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "addEventDetector", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_clearEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.clearEventsDetectors());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "clearEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEphemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEphemerisGenerator());
            return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEphemerisGenerator", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getEventsDetectors(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::java::util::Collection result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getEventsDetectors());
            return ::java::util::t_Collection::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "getEventsDetectors", args, 2);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_getPvProvider(t_FieldAbstractAnalyticalPropagator *self)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_propagate(t_FieldAbstractAnalyticalPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(result = self->object.propagate(a0, a1));
            return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldAbstractAnalyticalPropagator), (PyObject *) self, "propagate", args, 2);
        }
        static PyObject *t_FieldAbstractAnalyticalPropagator_get__parameters_(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__ephemerisGenerator(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::propagation::FieldEphemerisGenerator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemerisGenerator());
          return ::org::orekit::propagation::t_FieldEphemerisGenerator::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__eventsDetectors(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventsDetectors());
          return ::java::util::t_Collection::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractAnalyticalPropagator_get__pvProvider(t_FieldAbstractAnalyticalPropagator *self, void *data)
        {
          ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPvProvider());
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *CopolarS::class$ = NULL;
          jmethodID *CopolarS::mids$ = NULL;
          bool CopolarS::live$ = false;

          jclass CopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/CopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_456d9a2f64d6b28d] = env->getMethodID(cls, "cs", "()D");
              mids$[mid_ds_456d9a2f64d6b28d] = env->getMethodID(cls, "ds", "()D");
              mids$[mid_ns_456d9a2f64d6b28d] = env->getMethodID(cls, "ns", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CopolarS::cs() const
          {
            return env->callDoubleMethod(this$, mids$[mid_cs_456d9a2f64d6b28d]);
          }

          jdouble CopolarS::ds() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ds_456d9a2f64d6b28d]);
          }

          jdouble CopolarS::ns() const
          {
            return env->callDoubleMethod(this$, mids$[mid_ns_456d9a2f64d6b28d]);
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CopolarS_cs(t_CopolarS *self);
          static PyObject *t_CopolarS_ds(t_CopolarS *self);
          static PyObject *t_CopolarS_ns(t_CopolarS *self);

          static PyMethodDef t_CopolarS__methods_[] = {
            DECLARE_METHOD(t_CopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_CopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CopolarS)[] = {
            { Py_tp_methods, t_CopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CopolarS, t_CopolarS, CopolarS);

          void t_CopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(CopolarS), &PY_TYPE_DEF(CopolarS), module, "CopolarS", 0);
          }

          void t_CopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "class_", make_descriptor(CopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "wrapfn_", make_descriptor(t_CopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CopolarS::initializeClass, 1)))
              return NULL;
            return t_CopolarS::wrap_Object(CopolarS(((t_CopolarS *) arg)->object.this$));
          }
          static PyObject *t_CopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CopolarS_cs(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.cs());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ds(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ds());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CopolarS_ns(t_CopolarS *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.ns());
            return PyFloat_FromDouble((double) result);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldODEEventDetector::class$ = NULL;
        jmethodID *FieldODEEventDetector::mids$ = NULL;
        bool FieldODEEventDetector::live$ = false;

        jclass FieldODEEventDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldODEEventDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_ca2be72fa188dbd5] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_332eb628084a1f92] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_d83e6e399e248e87] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_b14b3849019061d8] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldODEEventDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ca2be72fa188dbd5], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler FieldODEEventDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_332eb628084a1f92]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval FieldODEEventDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_d83e6e399e248e87]));
        }

        jint FieldODEEventDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver FieldODEEventDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_b14b3849019061d8]));
        }

        void FieldODEEventDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
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
      namespace events {
        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg);
        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self);
        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args);
        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data);
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data);
        static PyGetSetDef t_FieldODEEventDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldODEEventDetector, handler),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, solver),
          DECLARE_GET_FIELD(t_FieldODEEventDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldODEEventDetector__methods_[] = {
          DECLARE_METHOD(t_FieldODEEventDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldODEEventDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, g, METH_O),
          DECLARE_METHOD(t_FieldODEEventDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_FieldODEEventDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldODEEventDetector)[] = {
          { Py_tp_methods, t_FieldODEEventDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldODEEventDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldODEEventDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldODEEventDetector, t_FieldODEEventDetector, FieldODEEventDetector);
        PyObject *t_FieldODEEventDetector::wrap_Object(const FieldODEEventDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldODEEventDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldODEEventDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldODEEventDetector *self = (t_FieldODEEventDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldODEEventDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldODEEventDetector), &PY_TYPE_DEF(FieldODEEventDetector), module, "FieldODEEventDetector", 0);
        }

        void t_FieldODEEventDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "class_", make_descriptor(FieldODEEventDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "wrapfn_", make_descriptor(t_FieldODEEventDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldODEEventDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldODEEventDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldODEEventDetector::initializeClass, 1)))
            return NULL;
          return t_FieldODEEventDetector::wrap_Object(FieldODEEventDetector(((t_FieldODEEventDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldODEEventDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldODEEventDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldODEEventDetector_of_(t_FieldODEEventDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldODEEventDetector_g(t_FieldODEEventDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldODEEventDetector_getHandler(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxCheckInterval(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_getMaxIterationCount(t_FieldODEEventDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldODEEventDetector_getSolver(t_FieldODEEventDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldODEEventDetector_init(t_FieldODEEventDetector *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
        static PyObject *t_FieldODEEventDetector_get__parameters_(t_FieldODEEventDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldODEEventDetector_get__handler(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxCheckInterval(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldODEEventDetector_get__maxIterationCount(t_FieldODEEventDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldODEEventDetector_get__solver(t_FieldODEEventDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PolynomialParser.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialParser::class$ = NULL;
      jmethodID *PolynomialParser::mids$ = NULL;
      bool PolynomialParser::live$ = false;

      jclass PolynomialParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_028b46dcfde98587] = env->getMethodID(cls, "<init>", "(CLorg/orekit/data/PolynomialParser$Unit;)V");
          mids$[mid_parse_5fc57a69c973af17] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PolynomialParser::PolynomialParser(jchar a0, const ::org::orekit::data::PolynomialParser$Unit & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_028b46dcfde98587, a0, a1.this$)) {}

      JArray< jdouble > PolynomialParser::parse(const ::java::lang::String & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_parse_5fc57a69c973af17], a0.this$));
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
      static PyObject *t_PolynomialParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PolynomialParser_init_(t_PolynomialParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PolynomialParser_parse(t_PolynomialParser *self, PyObject *arg);

      static PyMethodDef t_PolynomialParser__methods_[] = {
        DECLARE_METHOD(t_PolynomialParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser, parse, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialParser)[] = {
        { Py_tp_methods, t_PolynomialParser__methods_ },
        { Py_tp_init, (void *) t_PolynomialParser_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PolynomialParser, t_PolynomialParser, PolynomialParser);

      void t_PolynomialParser::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialParser), &PY_TYPE_DEF(PolynomialParser), module, "PolynomialParser", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "Unit", make_descriptor(&PY_TYPE_DEF(PolynomialParser$Unit)));
      }

      void t_PolynomialParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "class_", make_descriptor(PolynomialParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "wrapfn_", make_descriptor(t_PolynomialParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PolynomialParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialParser::initializeClass, 1)))
          return NULL;
        return t_PolynomialParser::wrap_Object(PolynomialParser(((t_PolynomialParser *) arg)->object.this$));
      }
      static PyObject *t_PolynomialParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PolynomialParser_init_(t_PolynomialParser *self, PyObject *args, PyObject *kwds)
      {
        jchar a0;
        ::org::orekit::data::PolynomialParser$Unit a1((jobject) NULL);
        PyTypeObject **p1;
        PolynomialParser object((jobject) NULL);

        if (!parseArgs(args, "CK", ::org::orekit::data::PolynomialParser$Unit::initializeClass, &a0, &a1, &p1, ::org::orekit::data::t_PolynomialParser$Unit::parameters_))
        {
          INT_CALL(object = PolynomialParser(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_PolynomialParser_parse(t_PolynomialParser *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.parse(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "parse", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/orekit/frames/Transform.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/FieldTransform.h"
#include "java/util/Collection.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldTransform::class$ = NULL;
      jmethodID *FieldTransform::mids$ = NULL;
      bool FieldTransform::live$ = false;

      jclass FieldTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e15b020416400437] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)V");
          mids$[mid_init$_ee45717687c334a1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_b4b465ca2d31b322] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_29687ccd72f81db7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)V");
          mids$[mid_init$_016ae101e3b99850] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/frames/Transform;)V");
          mids$[mid_init$_049e06eb4b4463ae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_7333807375adb1c5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_f398968fe5ef5ff5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldTransform;Lorg/orekit/frames/FieldTransform;)V");
          mids$[mid_init$_f953797f92c3fc12] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_c04c30a2fab87285] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_freeze_b8bdad2f73e0bf7c] = env->getMethodID(cls, "freeze", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getAcceleration_5791f80683b5227e] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getAngular_60e0de9a41eb35da] = env->getMethodID(cls, "getAngular", "()Lorg/orekit/utils/FieldAngularCoordinates;");
          mids$[mid_getCartesian_239ccd4fbdc5d04d] = env->getMethodID(cls, "getCartesian", "()Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getFieldDate_09b0a926600dfc14] = env->getMethodID(cls, "getFieldDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getIdentity_ac58675ed12d0410] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getInverse_b8bdad2f73e0bf7c] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldTransform;");
          mids$[mid_getJacobian_0ee4e0155590d2ee] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/utils/CartesianDerivativesFilter;[[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getRotation_ac4489fdef1c3aef] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_5791f80683b5227e] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getRotationRate_5791f80683b5227e] = env->getMethodID(cls, "getRotationRate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getTranslation_5791f80683b5227e] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getVelocity_5791f80683b5227e] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_interpolate_72c848b0aa1d0200] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_29a048b98cff002d] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/Collection;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_interpolate_f047fa447dbe3e45] = env->getStaticMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Ljava/util/stream/Stream;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_433375e70c1dd93f] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_shiftedBy_4df97b023e291093] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldTransform;");
          mids$[mid_staticShiftedBy_f11319a5fb25b3fd] = env->getMethodID(cls, "staticShiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toStaticTransform_dd9256b23dabf6f6] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformPVCoordinates_dc7eea29a4d4ad51] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_e42117f6acaa0604] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/TimeStampedPVCoordinates;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_32f08c76ddea4935] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");
          mids$[mid_transformPVCoordinates_bdfc1809fc8a7def] = env->getMethodID(cls, "transformPVCoordinates", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/utils/FieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e15b020416400437, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ee45717687c334a1, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b4b465ca2d31b322, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_29687ccd72f81db7, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::hipparchus::Field & a0, const ::org::orekit::frames::Transform & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_016ae101e3b99850, a0.this$, a1.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_049e06eb4b4463ae, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7333807375adb1c5, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldTransform & a1, const FieldTransform & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f398968fe5ef5ff5, a0.this$, a1.this$, a2.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f953797f92c3fc12, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform::FieldTransform(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c04c30a2fab87285, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldTransform FieldTransform::freeze() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_freeze_b8bdad2f73e0bf7c]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_5791f80683b5227e]));
      }

      ::org::orekit::utils::FieldAngularCoordinates FieldTransform::getAngular() const
      {
        return ::org::orekit::utils::FieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getAngular_60e0de9a41eb35da]));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::getCartesian() const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getCartesian_239ccd4fbdc5d04d]));
      }

      ::org::orekit::time::AbsoluteDate FieldTransform::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldTransform::getFieldDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFieldDate_09b0a926600dfc14]));
      }

      FieldTransform FieldTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_ac58675ed12d0410], a0.this$));
      }

      FieldTransform FieldTransform::getInverse() const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_getInverse_b8bdad2f73e0bf7c]));
      }

      void FieldTransform::getJacobian(const ::org::orekit::utils::CartesianDerivativesFilter & a0, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_getJacobian_0ee4e0155590d2ee], a0.this$, a1.this$);
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_ac4489fdef1c3aef]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getRotationRate() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationRate_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_5791f80683b5227e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldTransform::getVelocity() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_5791f80683b5227e]));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::java::util::Collection & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_72c848b0aa1d0200], a0.this$, a1.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::Collection & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_29a048b98cff002d], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::interpolate(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::utils::CartesianDerivativesFilter & a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::java::util::stream::Stream & a3)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldTransform(env->callStaticObjectMethod(cls, mids$[mid_interpolate_f047fa447dbe3e45], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldTransform FieldTransform::shiftedBy(jdouble a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_433375e70c1dd93f], a0));
      }

      FieldTransform FieldTransform::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldTransform(env->callObjectMethod(this$, mids$[mid_shiftedBy_4df97b023e291093], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::staticShiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_staticShiftedBy_f11319a5fb25b3fd], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform FieldTransform::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_dd9256b23dabf6f6]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_dc7eea29a4d4ad51], a0.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::TimeStampedPVCoordinates & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_e42117f6acaa0604], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::FieldPVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_32f08c76ddea4935], a0.this$));
      }

      ::org::orekit::utils::FieldPVCoordinates FieldTransform::transformPVCoordinates(const ::org::orekit::utils::PVCoordinates & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_transformPVCoordinates_bdfc1809fc8a7def], a0.this$));
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
      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args);
      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self);
      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self);
      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg);
      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self);
      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args);
      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data);
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data);
      static PyGetSetDef t_FieldTransform__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTransform, acceleration),
        DECLARE_GET_FIELD(t_FieldTransform, angular),
        DECLARE_GET_FIELD(t_FieldTransform, cartesian),
        DECLARE_GET_FIELD(t_FieldTransform, date),
        DECLARE_GET_FIELD(t_FieldTransform, fieldDate),
        DECLARE_GET_FIELD(t_FieldTransform, inverse),
        DECLARE_GET_FIELD(t_FieldTransform, rotation),
        DECLARE_GET_FIELD(t_FieldTransform, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldTransform, rotationRate),
        DECLARE_GET_FIELD(t_FieldTransform, translation),
        DECLARE_GET_FIELD(t_FieldTransform, velocity),
        DECLARE_GET_FIELD(t_FieldTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTransform__methods_[] = {
        DECLARE_METHOD(t_FieldTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, freeze, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getAngular, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getCartesian, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getFieldDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getJacobian, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getRotationRate, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, getVelocity, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, interpolate, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldTransform, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransform, staticShiftedBy, METH_O),
        DECLARE_METHOD(t_FieldTransform, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldTransform, transformPVCoordinates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTransform)[] = {
        { Py_tp_methods, t_FieldTransform__methods_ },
        { Py_tp_init, (void *) t_FieldTransform_init_ },
        { Py_tp_getset, t_FieldTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTransform, t_FieldTransform, FieldTransform);
      PyObject *t_FieldTransform::wrap_Object(const FieldTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransform *self = (t_FieldTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTransform), &PY_TYPE_DEF(FieldTransform), module, "FieldTransform", 0);
      }

      void t_FieldTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "class_", make_descriptor(FieldTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "wrapfn_", make_descriptor(t_FieldTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTransform::initializeClass, 1)))
          return NULL;
        return t_FieldTransform::wrap_Object(FieldTransform(((t_FieldTransform *) arg)->object.this$));
      }
      static PyObject *t_FieldTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTransform_of_(t_FieldTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTransform_init_(t_FieldTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Transform a1((jobject) NULL);
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldTransform(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform a2((jobject) NULL);
            PyTypeObject **p2;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldTransform::initializeClass, FieldTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldTransform::parameters_, &a2, &p2, t_FieldTransform::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldTransform(a0, a1, a2, a3));
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

      static PyObject *t_FieldTransform_freeze(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.freeze());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getAngular(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getCartesian(t_FieldTransform *self)
      {
        ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getDate(t_FieldTransform *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_FieldTransform_getFieldDate(t_FieldTransform *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldTransform::getIdentity(a0));
          return t_FieldTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_getInverse(t_FieldTransform *self)
      {
        FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getJacobian(t_FieldTransform *self, PyObject *args)
      {
        ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "K[[K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.getJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_getRotation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationAcceleration(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getRotationRate(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getTranslation(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_getVelocity(t_FieldTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_interpolate(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::Collection a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::CartesianDerivativesFilter a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::util::stream::Stream a3((jobject) NULL);
            PyTypeObject **p3;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &p3, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldTransform::interpolate(a0, a1, a2, a3));
              return t_FieldTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "interpolate", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_shiftedBy(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldTransform::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldTransform_staticShiftedBy(t_FieldTransform *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.staticShiftedBy(a0));
          return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "staticShiftedBy", arg);
        return NULL;
      }

      static PyObject *t_FieldTransform_toStaticTransform(t_FieldTransform *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldTransform_transformPVCoordinates(t_FieldTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPVCoordinates(a0));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPVCoordinates", args);
        return NULL;
      }
      static PyObject *t_FieldTransform_get__parameters_(t_FieldTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTransform_get__acceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__angular(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngular());
        return ::org::orekit::utils::t_FieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__cartesian(t_FieldTransform *self, void *data)
      {
        ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getCartesian());
        return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__date(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__fieldDate(t_FieldTransform *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFieldDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__inverse(t_FieldTransform *self, void *data)
      {
        FieldTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_FieldTransform::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationAcceleration(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__rotationRate(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationRate());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__translation(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldTransform_get__velocity(t_FieldTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getVelocity());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/VectorFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/util/Locale.h"
#include "java/text/ParsePosition.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/text/FieldPosition.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *VectorFormat::class$ = NULL;
      jmethodID *VectorFormat::mids$ = NULL;
      bool VectorFormat::live$ = false;
      ::java::lang::String *VectorFormat::DEFAULT_PREFIX = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SEPARATOR = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SUFFIX = NULL;

      jclass VectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/VectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_8f4014df8b545e23] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;)Ljava/lang/String;");
          mids$[mid_format_d63c028b54a2ec6c] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_81e8fdf65840780c] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_d34e2e8dd35583a0] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_0090f7797e403f43] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getSeparator_0090f7797e403f43] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_0090f7797e403f43] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_53f6a343d7e75f91] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parse_9afcbb599a8a8401] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parseCoordinates_8dfbb0f9e536d3df] = env->getMethodID(cls, "parseCoordinates", "(ILjava/lang/String;Ljava/text/ParsePosition;)[D");
          mids$[mid_format_eea61c07cc9f1c82] = env->getMethodID(cls, "format", "(Ljava/lang/StringBuffer;Ljava/text/FieldPosition;[D)Ljava/lang/StringBuffer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_PREFIX", "Ljava/lang/String;"));
          DEFAULT_SEPARATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SEPARATOR", "Ljava/lang/String;"));
          DEFAULT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUFFIX", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_8f4014df8b545e23], a0.this$));
      }

      ::java::lang::StringBuffer VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_d63c028b54a2ec6c], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > VectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_81e8fdf65840780c]));
      }

      ::java::text::NumberFormat VectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_d34e2e8dd35583a0]));
      }

      ::java::lang::String VectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_0090f7797e403f43]));
      }

      ::java::lang::String VectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_0090f7797e403f43]));
      }

      ::java::lang::String VectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_0090f7797e403f43]));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_53f6a343d7e75f91], a0.this$));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_9afcbb599a8a8401], a0.this$, a1.this$));
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
      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data);
      static PyGetSetDef t_VectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_VectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_VectorFormat, prefix),
        DECLARE_GET_FIELD(t_VectorFormat, separator),
        DECLARE_GET_FIELD(t_VectorFormat, suffix),
        DECLARE_GET_FIELD(t_VectorFormat, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VectorFormat__methods_[] = {
        DECLARE_METHOD(t_VectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, of_, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VectorFormat)[] = {
        { Py_tp_methods, t_VectorFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_VectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(VectorFormat, t_VectorFormat, VectorFormat);
      PyObject *t_VectorFormat::wrap_Object(const VectorFormat& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_VectorFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_VectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(VectorFormat), &PY_TYPE_DEF(VectorFormat), module, "VectorFormat", 0);
      }

      void t_VectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "class_", make_descriptor(VectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "wrapfn_", make_descriptor(t_VectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "boxfn_", make_descriptor(boxObject));
        env->getClass(VectorFormat::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_PREFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_PREFIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SEPARATOR", make_descriptor(j2p(*VectorFormat::DEFAULT_SEPARATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SUFFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_SUFFIX)));
      }

      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VectorFormat::initializeClass, 1)))
          return NULL;
        return t_VectorFormat::wrap_Object(VectorFormat(((t_VectorFormat *) arg)->object.this$));
      }
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::VectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSuffix());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MerweUnscentedTransform.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MerweUnscentedTransform::class$ = NULL;
      jmethodID *MerweUnscentedTransform::mids$ = NULL;
      bool MerweUnscentedTransform::live$ = false;
      jdouble MerweUnscentedTransform::DEFAULT_ALPHA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_BETA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass MerweUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MerweUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0a2a1ac2721c0336] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_d3d0b69fc0b5db95] = env->getMethodID(cls, "<init>", "(IDDD)V");
          mids$[mid_getWc_6d9adf1d5b463928] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_6d9adf1d5b463928] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_456d9a2f64d6b28d] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ALPHA = env->getStaticDoubleField(cls, "DEFAULT_ALPHA");
          DEFAULT_BETA = env->getStaticDoubleField(cls, "DEFAULT_BETA");
          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_0a2a1ac2721c0336, a0)) {}

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_d3d0b69fc0b5db95, a0, a1, a2, a3)) {}

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_6d9adf1d5b463928]));
      }

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_6d9adf1d5b463928]));
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
      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data);
      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data);
      static PyGetSetDef t_MerweUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MerweUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_MerweUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MerweUnscentedTransform)[] = {
        { Py_tp_methods, t_MerweUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_MerweUnscentedTransform_init_ },
        { Py_tp_getset, t_MerweUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MerweUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(MerweUnscentedTransform, t_MerweUnscentedTransform, MerweUnscentedTransform);

      void t_MerweUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(MerweUnscentedTransform), &PY_TYPE_DEF(MerweUnscentedTransform), module, "MerweUnscentedTransform", 0);
      }

      void t_MerweUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "class_", make_descriptor(MerweUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "wrapfn_", make_descriptor(t_MerweUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(MerweUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_ALPHA", make_descriptor(MerweUnscentedTransform::DEFAULT_ALPHA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_BETA", make_descriptor(MerweUnscentedTransform::DEFAULT_BETA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(MerweUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MerweUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_MerweUnscentedTransform::wrap_Object(MerweUnscentedTransform(((t_MerweUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MerweUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = MerweUnscentedTransform(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MerweUnscentedTransform(a0, a1, a2, a3));
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

      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/troposphere/MendesPavlisModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MendesPavlisModel::class$ = NULL;
          jmethodID *MendesPavlisModel::mids$ = NULL;
          bool MendesPavlisModel::live$ = false;

          jclass MendesPavlisModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MendesPavlisModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_667a7965403ed91a] = env->getMethodID(cls, "<init>", "(DDDD)V");
              mids$[mid_computeZenithDelay_99889d5cecaebf5d] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_c76a0fefc1748455] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getStandardModel_8321bc46d25ebe8f] = env->getStaticMethodID(cls, "getStandardModel", "(D)Lorg/orekit/models/earth/troposphere/MendesPavlisModel;");
              mids$[mid_mappingFactors_67294ed37389436d] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6def5a87906f3de8] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_pathDelay_af133f80cdba1dc2] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_0326270bf0e8ed17] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MendesPavlisModel::MendesPavlisModel(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_667a7965403ed91a, a0, a1, a2, a3)) {}

          JArray< jdouble > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_99889d5cecaebf5d], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_c76a0fefc1748455], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List MendesPavlisModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          MendesPavlisModel MendesPavlisModel::getStandardModel(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MendesPavlisModel(env->callStaticObjectMethod(cls, mids$[mid_getStandardModel_8321bc46d25ebe8f], a0));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MendesPavlisModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_67294ed37389436d], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MendesPavlisModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6def5a87906f3de8], a0, a1.this$, a2.this$));
          }

          jdouble MendesPavlisModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_af133f80cdba1dc2], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement MendesPavlisModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_0326270bf0e8ed17], a0.this$, a1.this$, a2.this$, a3.this$));
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
    namespace models {
      namespace earth {
        namespace troposphere {
          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self);
          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args);
          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data);
          static PyGetSetDef t_MendesPavlisModel__fields_[] = {
            DECLARE_GET_FIELD(t_MendesPavlisModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MendesPavlisModel__methods_[] = {
            DECLARE_METHOD(t_MendesPavlisModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_MendesPavlisModel, getStandardModel, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MendesPavlisModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_MendesPavlisModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MendesPavlisModel)[] = {
            { Py_tp_methods, t_MendesPavlisModel__methods_ },
            { Py_tp_init, (void *) t_MendesPavlisModel_init_ },
            { Py_tp_getset, t_MendesPavlisModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MendesPavlisModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MendesPavlisModel, t_MendesPavlisModel, MendesPavlisModel);

          void t_MendesPavlisModel::install(PyObject *module)
          {
            installType(&PY_TYPE(MendesPavlisModel), &PY_TYPE_DEF(MendesPavlisModel), module, "MendesPavlisModel", 0);
          }

          void t_MendesPavlisModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "class_", make_descriptor(MendesPavlisModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "wrapfn_", make_descriptor(t_MendesPavlisModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MendesPavlisModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MendesPavlisModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MendesPavlisModel::initializeClass, 1)))
              return NULL;
            return t_MendesPavlisModel::wrap_Object(MendesPavlisModel(((t_MendesPavlisModel *) arg)->object.this$));
          }
          static PyObject *t_MendesPavlisModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MendesPavlisModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MendesPavlisModel_init_(t_MendesPavlisModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            MendesPavlisModel object((jobject) NULL);

            if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MendesPavlisModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MendesPavlisModel_computeZenithDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::bodies::FieldGeodeticPoint a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "K[KK", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
              {
                ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.computeZenithDelay(a0, a1, a2));
                  return result.wrap();
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "computeZenithDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_getParametersDrivers(t_MendesPavlisModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_MendesPavlisModel_getStandardModel(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            MendesPavlisModel result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::orekit::models::earth::troposphere::MendesPavlisModel::getStandardModel(a0));
              return t_MendesPavlisModel::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getStandardModel", arg);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_mappingFactors(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                JArray< jdouble > result((jobject) NULL);

                if (!parseArgs(args, "Dkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return result.wrap();
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.mappingFactors(a0, a1, a2));
                  return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_pathDelay(t_MendesPavlisModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::bodies::FieldGeodeticPoint a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::time::FieldAbsoluteDate a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::bodies::t_FieldGeodeticPoint::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "Dk[Dk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.pathDelay(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pathDelay", args);
            return NULL;
          }

          static PyObject *t_MendesPavlisModel_get__parametersDrivers(t_MendesPavlisModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/RangeBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/Map.h"
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/Range.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *RangeBuilder::class$ = NULL;
          jmethodID *RangeBuilder::mids$ = NULL;
          bool RangeBuilder::live$ = false;

          jclass RangeBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/RangeBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c8415f9ae7de2332] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/CorrelatedRandomVectorGenerator;Lorg/orekit/estimation/measurements/GroundStation;ZDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
              mids$[mid_build_37c539225d9a3afd] = env->getMethodID(cls, "build", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Map;)Lorg/orekit/estimation/measurements/Range;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RangeBuilder::RangeBuilder(const ::org::hipparchus::random::CorrelatedRandomVectorGenerator & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, jboolean a2, jdouble a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder(env->newObject(initializeClass, &mids$, mid_init$_c8415f9ae7de2332, a0.this$, a1.this$, a2, a3, a4, a5.this$)) {}

          ::org::orekit::estimation::measurements::Range RangeBuilder::build(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Map & a1) const
          {
            return ::org::orekit::estimation::measurements::Range(env->callObjectMethod(this$, mids$[mid_build_37c539225d9a3afd], a0.this$, a1.this$));
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
          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args);
          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args);
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data);
          static PyGetSetDef t_RangeBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_RangeBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RangeBuilder__methods_[] = {
            DECLARE_METHOD(t_RangeBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_RangeBuilder, build, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeBuilder)[] = {
            { Py_tp_methods, t_RangeBuilder__methods_ },
            { Py_tp_init, (void *) t_RangeBuilder_init_ },
            { Py_tp_getset, t_RangeBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeBuilder)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractMeasurementBuilder),
            NULL
          };

          DEFINE_TYPE(RangeBuilder, t_RangeBuilder, RangeBuilder);
          PyObject *t_RangeBuilder::wrap_Object(const RangeBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RangeBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RangeBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RangeBuilder *self = (t_RangeBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RangeBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeBuilder), &PY_TYPE_DEF(RangeBuilder), module, "RangeBuilder", 0);
          }

          void t_RangeBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "class_", make_descriptor(RangeBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "wrapfn_", make_descriptor(t_RangeBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeBuilder::initializeClass, 1)))
              return NULL;
            return t_RangeBuilder::wrap_Object(RangeBuilder(((t_RangeBuilder *) arg)->object.this$));
          }
          static PyObject *t_RangeBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RangeBuilder_of_(t_RangeBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RangeBuilder_init_(t_RangeBuilder *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::random::CorrelatedRandomVectorGenerator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
            jboolean a2;
            jdouble a3;
            jdouble a4;
            ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
            RangeBuilder object((jobject) NULL);

            if (!parseArgs(args, "kkZDDk", ::org::hipparchus::random::CorrelatedRandomVectorGenerator::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = RangeBuilder(a0, a1, a2, a3, a4, a5));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(Range);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RangeBuilder_build(t_RangeBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::estimation::measurements::Range result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.build(a0, a1));
              return ::org::orekit::estimation::measurements::t_Range::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RangeBuilder), (PyObject *) self, "build", args, 2);
          }
          static PyObject *t_RangeBuilder_get__parameters_(t_RangeBuilder *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitDeterminationKey::class$ = NULL;
              jmethodID *OrbitDeterminationKey::mids$ = NULL;
              bool OrbitDeterminationKey::live$ = false;
              OrbitDeterminationKey *OrbitDeterminationKey::ACTUAL_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::COMMENT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::CONSIDER_PARAMS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DATA_TYPES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::DAYS_SINCE_LAST_OBS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::GDOP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::MAXIMUM_OBS_GAP = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OBS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_CONFIDENCE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGINT = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_EPOCH_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_METHOD = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_MIN_PRED_EIGMIN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::OD_PREV_ID = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::RECOMMENDED_OD_SPAN = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SEDR = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SENSORS_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_N = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::SOLVE_STATES = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_AVAILABLE = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::TRACKS_USED = NULL;
              OrbitDeterminationKey *OrbitDeterminationKey::WEIGHTED_RMS = NULL;

              jclass OrbitDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_4d903bf3fd8e3c6b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDetermination;)Z");
                  mids$[mid_valueOf_fcfab511db1738f1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");
                  mids$[mid_values_c1734e9d2e69597d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ACTUAL_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "ACTUAL_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  COMMENT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  CONSIDER_PARAMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "CONSIDER_PARAMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DATA_TYPES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DATA_TYPES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_FIRST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_FIRST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  DAYS_SINCE_LAST_OBS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "DAYS_SINCE_LAST_OBS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  GDOP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "GDOP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  MAXIMUM_OBS_GAP = new OrbitDeterminationKey(env->getStaticObjectField(cls, "MAXIMUM_OBS_GAP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OBS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OBS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_CONFIDENCE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_CONFIDENCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGINT = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGINT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_EPOCH_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_EPOCH_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MAX_PRED_EIGMAJ = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MAX_PRED_EIGMAJ", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_METHOD = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_MIN_PRED_EIGMIN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_MIN_PRED_EIGMIN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  OD_PREV_ID = new OrbitDeterminationKey(env->getStaticObjectField(cls, "OD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  RECOMMENDED_OD_SPAN = new OrbitDeterminationKey(env->getStaticObjectField(cls, "RECOMMENDED_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SEDR = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SEDR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SENSORS_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SENSORS_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_N = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_N", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  SOLVE_STATES = new OrbitDeterminationKey(env->getStaticObjectField(cls, "SOLVE_STATES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_AVAILABLE = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  TRACKS_USED = new OrbitDeterminationKey(env->getStaticObjectField(cls, "TRACKS_USED", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  WEIGHTED_RMS = new OrbitDeterminationKey(env->getStaticObjectField(cls, "WEIGHTED_RMS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean OrbitDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_4d903bf3fd8e3c6b], a0.this$, a1.this$, a2.this$);
              }

              OrbitDeterminationKey OrbitDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OrbitDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fcfab511db1738f1], a0.this$));
              }

              JArray< OrbitDeterminationKey > OrbitDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OrbitDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c1734e9d2e69597d]));
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
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {
              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data);
              static PyGetSetDef t_OrbitDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_OrbitDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_OrbitDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OrbitDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitDeterminationKey)[] = {
                { Py_tp_methods, t_OrbitDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OrbitDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OrbitDeterminationKey, t_OrbitDeterminationKey, OrbitDeterminationKey);
              PyObject *t_OrbitDeterminationKey::wrap_Object(const OrbitDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OrbitDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OrbitDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OrbitDeterminationKey *self = (t_OrbitDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OrbitDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitDeterminationKey), &PY_TYPE_DEF(OrbitDeterminationKey), module, "OrbitDeterminationKey", 0);
              }

              void t_OrbitDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "class_", make_descriptor(OrbitDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "wrapfn_", make_descriptor(t_OrbitDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(OrbitDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "ACTUAL_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::ACTUAL_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "COMMENT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "CONSIDER_PARAMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::CONSIDER_PARAMS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DATA_TYPES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DATA_TYPES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_FIRST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_FIRST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "DAYS_SINCE_LAST_OBS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::DAYS_SINCE_LAST_OBS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "GDOP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::GDOP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "MAXIMUM_OBS_GAP", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::MAXIMUM_OBS_GAP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OBS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OBS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_CONFIDENCE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_CONFIDENCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGINT", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGINT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_EPOCH_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_EPOCH_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MAX_PRED_EIGMAJ", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MAX_PRED_EIGMAJ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_METHOD", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_MIN_PRED_EIGMIN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_MIN_PRED_EIGMIN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "OD_PREV_ID", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::OD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "RECOMMENDED_OD_SPAN", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::RECOMMENDED_OD_SPAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SEDR", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SEDR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SENSORS_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SENSORS_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_N", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_N)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "SOLVE_STATES", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::SOLVE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_AVAILABLE", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_AVAILABLE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "TRACKS_USED", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::TRACKS_USED)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitDeterminationKey), "WEIGHTED_RMS", make_descriptor(t_OrbitDeterminationKey::wrap_Object(*OrbitDeterminationKey::WEIGHTED_RMS)));
              }

              static PyObject *t_OrbitDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_OrbitDeterminationKey::wrap_Object(OrbitDeterminationKey(((t_OrbitDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_OrbitDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OrbitDeterminationKey_of_(t_OrbitDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OrbitDeterminationKey_process(t_OrbitDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDetermination::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_OrbitDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OrbitDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::valueOf(a0));
                  return t_OrbitDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OrbitDeterminationKey_values(PyTypeObject *type)
              {
                JArray< OrbitDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_OrbitDeterminationKey::wrap_jobject);
              }
              static PyObject *t_OrbitDeterminationKey_get__parameters_(t_OrbitDeterminationKey *self, void *data)
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
#include "org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *AbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *AbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool AbstractConstantThrustPropulsionModel::live$ = false;

          jclass AbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/AbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0f1efbd8efdc5b6d] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_341fcef9a4126498] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getDirection_17a952530a808943] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getDirection_71c51b45829333ce] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_05c598bf3375e090] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_66a2f071e6ed0c06] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_e912d21057defe63] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getFlowRate_79518d097c897d26] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_4368a5d862927c08] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getIsp_456d9a2f64d6b28d] = env->getMethodID(cls, "getIsp", "()D");
              mids$[mid_getIsp_e912d21057defe63] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getThrustMagnitude_456d9a2f64d6b28d] = env->getMethodID(cls, "getThrustMagnitude", "()D");
              mids$[mid_getThrustMagnitude_e912d21057defe63] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getThrustVector_17a952530a808943] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_0afb6e76c9566061] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_31ec2b6903b76c9e] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_78226ca7935182ea] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_71c51b45829333ce] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_78989e44b99f7cc2] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_00aba28d3abe9a8c] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getInitialThrustVector_17a952530a808943] = env->getMethodID(cls, "getInitialThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getInitialFlowRate_456d9a2f64d6b28d] = env->getMethodID(cls, "getInitialFlowRate", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f1efbd8efdc5b6d, a0, a1, a2.this$, a3.this$)) {}

          AbstractConstantThrustPropulsionModel::AbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_341fcef9a4126498, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType AbstractConstantThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_9fb96072e0d6dbf0]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getDirection(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_71c51b45829333ce], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_456d9a2f64d6b28d]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_f05cb8c6dfd5e0b9], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_05c598bf3375e090], a0.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_66a2f071e6ed0c06], a0.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_e912d21057defe63], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_79518d097c897d26], a0.this$, a1.this$));
          }

          jdouble AbstractConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_4368a5d862927c08], a0.this$, a1.this$);
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_456d9a2f64d6b28d]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_e912d21057defe63], a0.this$);
          }

          ::java::lang::String AbstractConstantThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_456d9a2f64d6b28d]);
          }

          jdouble AbstractConstantThrustPropulsionModel::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_e912d21057defe63], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_0afb6e76c9566061], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_31ec2b6903b76c9e], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_78226ca7935182ea], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_71c51b45829333ce], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_78989e44b99f7cc2], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AbstractConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_00aba28d3abe9a8c], a0.this$, a1.this$));
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
        namespace propulsion {
          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_AbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, direction),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, isp),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustMagnitude),
            DECLARE_GET_FIELD(t_AbstractConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getDirection, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getIsp, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustMagnitude, METH_VARARGS),
            DECLARE_METHOD(t_AbstractConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_AbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_AbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_AbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractConstantThrustPropulsionModel, t_AbstractConstantThrustPropulsionModel, AbstractConstantThrustPropulsionModel);

          void t_AbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(AbstractConstantThrustPropulsionModel), module, "AbstractConstantThrustPropulsionModel", 0);
          }

          void t_AbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "class_", make_descriptor(AbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_AbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_AbstractConstantThrustPropulsionModel::wrap_Object(AbstractConstantThrustPropulsionModel(((t_AbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_AbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractConstantThrustPropulsionModel_init_(t_AbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                AbstractConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = AbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_AbstractConstantThrustPropulsionModel_getControl3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getDirection(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDirection());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getDirection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getFlowRate(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getIsp(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getIsp());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getIsp(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getName(t_AbstractConstantThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitude());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_getThrustVector(t_AbstractConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__control3DVectorCostType(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__direction(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__flowRate(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__isp(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIsp());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__name(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustMagnitude(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getThrustMagnitude());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_AbstractConstantThrustPropulsionModel_get__thrustVector(t_AbstractConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/FieldVector2D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *EncounterLOF::class$ = NULL;
        jmethodID *EncounterLOF::mids$ = NULL;
        bool EncounterLOF::live$ = false;

        jclass EncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/EncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeProjectionMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "computeProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_computeProjectionMatrix_66ba1a35ed9fb7d4] = env->getMethodID(cls, "computeProjectionMatrix", "(Lorg/hipparchus/Field;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_getAxisNormalToCollisionPlane_17a952530a808943] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_b10aa29cc18662da] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getOther_6761e3f334368d44] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_isQuasiInertial_e470b6d9e0d979db] = env->getMethodID(cls, "isQuasiInertial", "()Z");
            mids$[mid_projectOntoCollisionPlane_cc9be632777be51e] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/twod/FieldVector2D;");
            mids$[mid_projectOntoCollisionPlane_e74bef55b3143874] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
            mids$[mid_projectOntoCollisionPlane_311c21c57522a65c] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
            mids$[mid_projectOntoCollisionPlane_e00cd33aedcc5bd0] = env->getMethodID(cls, "projectOntoCollisionPlane", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_rotationFromInertial_9a23f79cd11b74e7] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_95b12e29918a648c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_891f682396b75876] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_f3b8fc53bbbd7a0a] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_346e8a02c9c839ea] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_rotationFromInertial_0483676d141ad17c] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::computeProjectionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_7116bbecdd8ceb21]));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::computeProjectionMatrix(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectionMatrix_66ba1a35ed9fb7d4], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D EncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D EncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_dc29118b4d22b28d], a0.this$));
        }

        ::org::orekit::utils::FieldPVCoordinates EncounterLOF::getFieldOther(const ::org::hipparchus::Field & a0) const
        {
          return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getFieldOther_b10aa29cc18662da], a0.this$));
        }

        ::org::orekit::utils::PVCoordinates EncounterLOF::getOther() const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getOther_6761e3f334368d44]));
        }

        jboolean EncounterLOF::isQuasiInertial() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isQuasiInertial_e470b6d9e0d979db]);
        }

        ::org::hipparchus::geometry::euclidean::twod::FieldVector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::FieldVector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_cc9be632777be51e], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::twod::Vector2D EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_e74bef55b3143874], a0.this$));
        }

        ::org::hipparchus::linear::FieldMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::FieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_311c21c57522a65c], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix EncounterLOF::projectOntoCollisionPlane(const ::org::hipparchus::linear::RealMatrix & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_projectOntoCollisionPlane_e00cd33aedcc5bd0], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_9a23f79cd11b74e7], a0.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_95b12e29918a648c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation EncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_891f682396b75876], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_f3b8fc53bbbd7a0a], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_346e8a02c9c839ea], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation EncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_0483676d141ad17c], a0.this$, a1.this$, a2.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_EncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOF_computeProjectionMatrix(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_getAxisNormalToCollisionPlane(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_getFieldOther(t_EncounterLOF *self, PyObject *arg);
        static PyObject *t_EncounterLOF_getOther(t_EncounterLOF *self);
        static PyObject *t_EncounterLOF_isQuasiInertial(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_projectOntoCollisionPlane(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_rotationFromInertial(t_EncounterLOF *self, PyObject *args);
        static PyObject *t_EncounterLOF_get__axisNormalToCollisionPlane(t_EncounterLOF *self, void *data);
        static PyObject *t_EncounterLOF_get__other(t_EncounterLOF *self, void *data);
        static PyObject *t_EncounterLOF_get__quasiInertial(t_EncounterLOF *self, void *data);
        static PyGetSetDef t_EncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_EncounterLOF, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_EncounterLOF, other),
          DECLARE_GET_FIELD(t_EncounterLOF, quasiInertial),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EncounterLOF__methods_[] = {
          DECLARE_METHOD(t_EncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOF, computeProjectionMatrix, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, getFieldOther, METH_O),
          DECLARE_METHOD(t_EncounterLOF, getOther, METH_NOARGS),
          DECLARE_METHOD(t_EncounterLOF, isQuasiInertial, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, projectOntoCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EncounterLOF)[] = {
          { Py_tp_methods, t_EncounterLOF__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::LOF),
          NULL
        };

        DEFINE_TYPE(EncounterLOF, t_EncounterLOF, EncounterLOF);

        void t_EncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(EncounterLOF), &PY_TYPE_DEF(EncounterLOF), module, "EncounterLOF", 0);
        }

        void t_EncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "class_", make_descriptor(EncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "wrapfn_", make_descriptor(t_EncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EncounterLOF::initializeClass, 1)))
            return NULL;
          return t_EncounterLOF::wrap_Object(EncounterLOF(((t_EncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_EncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EncounterLOF_computeProjectionMatrix(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.computeProjectionMatrix());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.computeProjectionMatrix(a0));
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "computeProjectionMatrix", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getAxisNormalToCollisionPlane(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getAxisNormalToCollisionPlane", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getFieldOther(t_EncounterLOF *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldOther(a0));
            return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldOther", arg);
          return NULL;
        }

        static PyObject *t_EncounterLOF_getOther(t_EncounterLOF *self)
        {
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);
          OBJ_CALL(result = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        static PyObject *t_EncounterLOF_isQuasiInertial(t_EncounterLOF *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isQuasiInertial());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EncounterLOF), (PyObject *) self, "isQuasiInertial", args, 2);
        }

        static PyObject *t_EncounterLOF_projectOntoCollisionPlane(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::FieldVector2D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::twod::t_FieldVector2D::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.projectOntoCollisionPlane(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "projectOntoCollisionPlane", args);
          return NULL;
        }

        static PyObject *t_EncounterLOF_rotationFromInertial(t_EncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(EncounterLOF), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_EncounterLOF_get__axisNormalToCollisionPlane(t_EncounterLOF *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_EncounterLOF_get__other(t_EncounterLOF *self, void *data)
        {
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          OBJ_CALL(value = self->object.getOther());
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
        }

        static PyObject *t_EncounterLOF_get__quasiInertial(t_EncounterLOF *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isQuasiInertial());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/ArrayList.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *DualFrequencyHatchFilter::class$ = NULL;
          jmethodID *DualFrequencyHatchFilter::mids$ = NULL;
          bool DualFrequencyHatchFilter::live$ = false;

          jclass DualFrequencyHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3b8b3560e426ddf2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;DDDI)V");
              mids$[mid_filterData_c3c99b420174eda7] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_getFirstFrequencyPhaseHistory_5e75cfe55d40f4c7] = env->getMethodID(cls, "getFirstFrequencyPhaseHistory", "()Ljava/util/ArrayList;");
              mids$[mid_getSecondFrequencyPhaseHistory_5e75cfe55d40f4c7] = env->getMethodID(cls, "getSecondFrequencyPhaseHistory", "()Ljava/util/ArrayList;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencyHatchFilter::DualFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, jdouble a3, jdouble a4, jdouble a5, jint a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_3b8b3560e426ddf2, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_c3c99b420174eda7], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getFirstFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getFirstFrequencyPhaseHistory_5e75cfe55d40f4c7]));
          }

          ::java::util::ArrayList DualFrequencyHatchFilter::getSecondFrequencyPhaseHistory() const
          {
            return ::java::util::ArrayList(env->callObjectMethod(this$, mids$[mid_getSecondFrequencyPhaseHistory_5e75cfe55d40f4c7]));
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
        namespace filtering {
          static PyObject *t_DualFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DualFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DualFrequencyHatchFilter_init_(t_DualFrequencyHatchFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DualFrequencyHatchFilter_filterData(t_DualFrequencyHatchFilter *self, PyObject *args);
          static PyObject *t_DualFrequencyHatchFilter_getFirstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self);
          static PyObject *t_DualFrequencyHatchFilter_getSecondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self);
          static PyObject *t_DualFrequencyHatchFilter_get__firstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data);
          static PyObject *t_DualFrequencyHatchFilter_get__secondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data);
          static PyGetSetDef t_DualFrequencyHatchFilter__fields_[] = {
            DECLARE_GET_FIELD(t_DualFrequencyHatchFilter, firstFrequencyPhaseHistory),
            DECLARE_GET_FIELD(t_DualFrequencyHatchFilter, secondFrequencyPhaseHistory),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DualFrequencyHatchFilter__methods_[] = {
            DECLARE_METHOD(t_DualFrequencyHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, filterData, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, getFirstFrequencyPhaseHistory, METH_NOARGS),
            DECLARE_METHOD(t_DualFrequencyHatchFilter, getSecondFrequencyPhaseHistory, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DualFrequencyHatchFilter)[] = {
            { Py_tp_methods, t_DualFrequencyHatchFilter__methods_ },
            { Py_tp_init, (void *) t_DualFrequencyHatchFilter_init_ },
            { Py_tp_getset, t_DualFrequencyHatchFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DualFrequencyHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(DualFrequencyHatchFilter, t_DualFrequencyHatchFilter, DualFrequencyHatchFilter);

          void t_DualFrequencyHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(DualFrequencyHatchFilter), &PY_TYPE_DEF(DualFrequencyHatchFilter), module, "DualFrequencyHatchFilter", 0);
          }

          void t_DualFrequencyHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "class_", make_descriptor(DualFrequencyHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "wrapfn_", make_descriptor(t_DualFrequencyHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencyHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DualFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DualFrequencyHatchFilter::initializeClass, 1)))
              return NULL;
            return t_DualFrequencyHatchFilter::wrap_Object(DualFrequencyHatchFilter(((t_DualFrequencyHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_DualFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DualFrequencyHatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DualFrequencyHatchFilter_init_(t_DualFrequencyHatchFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jint a6;
            DualFrequencyHatchFilter object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDI", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = DualFrequencyHatchFilter(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DualFrequencyHatchFilter_filterData(t_DualFrequencyHatchFilter *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.filterData(a0, a1, a2));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "filterData", args);
            return NULL;
          }

          static PyObject *t_DualFrequencyHatchFilter_getFirstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getFirstFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_DualFrequencyHatchFilter_getSecondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self)
          {
            ::java::util::ArrayList result((jobject) NULL);
            OBJ_CALL(result = self->object.getSecondFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_DualFrequencyHatchFilter_get__firstFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getFirstFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }

          static PyObject *t_DualFrequencyHatchFilter_get__secondFrequencyPhaseHistory(t_DualFrequencyHatchFilter *self, void *data)
          {
            ::java::util::ArrayList value((jobject) NULL);
            OBJ_CALL(value = self->object.getSecondFrequencyPhaseHistory());
            return ::java::util::t_ArrayList::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07Data::class$ = NULL;
              jmethodID *SsrIgm07Data::mids$ = NULL;
              bool SsrIgm07Data::live$ = false;

              jclass SsrIgm07Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSsrUra_456d9a2f64d6b28d] = env->getMethodID(cls, "getSsrUra", "()D");
                  mids$[mid_setSsrUra_77e0f9a1f260e2e5] = env->getMethodID(cls, "setSsrUra", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Data::SsrIgm07Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

              jdouble SsrIgm07Data::getSsrUra() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSsrUra_456d9a2f64d6b28d]);
              }

              void SsrIgm07Data::setSsrUra(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSsrUra_77e0f9a1f260e2e5], a0);
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
          namespace ssr {
            namespace igm {
              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self);
              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg);
              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data);
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm07Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm07Data, ssrUra),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm07Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Data, getSsrUra, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm07Data, setSsrUra, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07Data)[] = {
                { Py_tp_methods, t_SsrIgm07Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07Data_init_ },
                { Py_tp_getset, t_SsrIgm07Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm07Data, t_SsrIgm07Data, SsrIgm07Data);

              void t_SsrIgm07Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07Data), &PY_TYPE_DEF(SsrIgm07Data), module, "SsrIgm07Data", 0);
              }

              void t_SsrIgm07Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "class_", make_descriptor(SsrIgm07Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "wrapfn_", make_descriptor(t_SsrIgm07Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07Data::wrap_Object(SsrIgm07Data(((t_SsrIgm07Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm07Data_init_(t_SsrIgm07Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm07Data object((jobject) NULL);

                INT_CALL(object = SsrIgm07Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm07Data_getSsrUra(t_SsrIgm07Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSsrUra());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm07Data_setSsrUra(t_SsrIgm07Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSsrUra(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSsrUra", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm07Data_get__ssrUra(t_SsrIgm07Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSsrUra());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm07Data_set__ssrUra(t_SsrIgm07Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSsrUra(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "ssrUra", arg);
                return -1;
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
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Segment.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SubLine::class$ = NULL;
          jmethodID *SubLine::mids$ = NULL;
          bool SubLine::live$ = false;

          jclass SubLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SubLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_365a49cf9e7fff2a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Segment;)V");
              mids$[mid_init$_ad2105e4a104c499] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;)V");
              mids$[mid_init$_7b3ba1964c11031c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_intersection_40eb3b0b6d09129d] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/SubLine;Z)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Segment & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_365a49cf9e7fff2a, a0.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0, const ::org::hipparchus::geometry::euclidean::oned::IntervalsSet & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ad2105e4a104c499, a0.this$, a1.this$)) {}

          SubLine::SubLine(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b3ba1964c11031c, a0.this$, a1.this$, a2)) {}

          ::java::util::List SubLine::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D SubLine::intersection(const SubLine & a0, jboolean a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_40eb3b0b6d09129d], a0.this$, a1));
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
          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SubLine_getSegments(t_SubLine *self);
          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args);
          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data);
          static PyGetSetDef t_SubLine__fields_[] = {
            DECLARE_GET_FIELD(t_SubLine, segments),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubLine__methods_[] = {
            DECLARE_METHOD(t_SubLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubLine, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_SubLine, intersection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubLine)[] = {
            { Py_tp_methods, t_SubLine__methods_ },
            { Py_tp_init, (void *) t_SubLine_init_ },
            { Py_tp_getset, t_SubLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SubLine, t_SubLine, SubLine);

          void t_SubLine::install(PyObject *module)
          {
            installType(&PY_TYPE(SubLine), &PY_TYPE_DEF(SubLine), module, "SubLine", 0);
          }

          void t_SubLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "class_", make_descriptor(SubLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "wrapfn_", make_descriptor(t_SubLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubLine::initializeClass, 1)))
              return NULL;
            return t_SubLine::wrap_Object(SubLine(((t_SubLine *) arg)->object.this$));
          }
          static PyObject *t_SubLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SubLine_init_(t_SubLine *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Segment a0((jobject) NULL);
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Segment::initializeClass, &a0))
                {
                  INT_CALL(object = SubLine(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::oned::IntervalsSet a1((jobject) NULL);
                PyTypeObject **p1;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, ::org::hipparchus::geometry::euclidean::oned::IntervalsSet::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::oned::t_IntervalsSet::parameters_))
                {
                  INT_CALL(object = SubLine(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                SubLine object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SubLine(a0, a1, a2));
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

          static PyObject *t_SubLine_getSegments(t_SubLine *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Segment));
          }

          static PyObject *t_SubLine_intersection(t_SubLine *self, PyObject *args)
          {
            SubLine a0((jobject) NULL);
            jboolean a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kZ", SubLine::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_SubLine_get__segments(t_SubLine *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet::class$ = NULL;
          jmethodID *PolyhedronsSet::mids$ = NULL;
          bool PolyhedronsSet::live$ = false;

          jclass PolyhedronsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_4535d6cb9170f124] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;D)V");
              mids$[mid_init$_3e72dd0bd3a69a59] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_b832ff2fd1b54c87] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_983b22c4b36f878a] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;D)V");
              mids$[mid_init$_c618f65720f1b668] = env->getMethodID(cls, "<init>", "(DDDDDDD)V");
              mids$[mid_buildNew_d63bb7e6b124b271] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_firstIntersection_35b9df4a7109e3eb] = env->getMethodID(cls, "firstIntersection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
              mids$[mid_getBRep_b9db630e46c093bb] = env->getMethodID(cls, "getBRep", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep;");
              mids$[mid_rotate_6640f6f7a491ea06] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_translate_3b9027e260eba8fe] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");
              mids$[mid_computeGeometricalProperties_7ae3461a92a43152] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet::PolyhedronsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_4535d6cb9170f124, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_3e72dd0bd3a69a59, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_b832ff2fd1b54c87, a0.this$, a1)) {}

          PolyhedronsSet::PolyhedronsSet(const ::java::util::List & a0, const ::java::util::List & a1, jdouble a2) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_983b22c4b36f878a, a0.this$, a1.this$, a2)) {}

          PolyhedronsSet::PolyhedronsSet(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_c618f65720f1b668, a0, a1, a2, a3, a4, a5, a6)) {}

          PolyhedronsSet PolyhedronsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_buildNew_d63bb7e6b124b271], a0.this$));
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane PolyhedronsSet::firstIntersection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Line & a1) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_firstIntersection_35b9df4a7109e3eb], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep PolyhedronsSet::getBRep() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep(env->callObjectMethod(this$, mids$[mid_getBRep_b9db630e46c093bb]));
          }

          PolyhedronsSet PolyhedronsSet::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_rotate_6640f6f7a491ea06], a0.this$, a1.this$));
          }

          PolyhedronsSet PolyhedronsSet::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_translate_3b9027e260eba8fe], a0.this$));
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
          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args);
          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self);
          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args);
          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg);
          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data);
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data);
          static PyGetSetDef t_PolyhedronsSet__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet, bRep),
            DECLARE_GET_FIELD(t_PolyhedronsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, firstIntersection, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, getBRep, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet, rotate, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet, translate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet)[] = {
            { Py_tp_methods, t_PolyhedronsSet__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet_init_ },
            { Py_tp_getset, t_PolyhedronsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet, t_PolyhedronsSet, PolyhedronsSet);
          PyObject *t_PolyhedronsSet::wrap_Object(const PolyhedronsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet *self = (t_PolyhedronsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet), &PY_TYPE_DEF(PolyhedronsSet), module, "PolyhedronsSet", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "BRep", make_descriptor(&PY_TYPE_DEF(PolyhedronsSet$BRep)));
          }

          void t_PolyhedronsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "class_", make_descriptor(PolyhedronsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "wrapfn_", make_descriptor(t_PolyhedronsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet::wrap_Object(PolyhedronsSet(((t_PolyhedronsSet *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet_of_(t_PolyhedronsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet_init_(t_PolyhedronsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = PolyhedronsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "KKD", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
                  break;
                }
              }
              goto err;
             case 7:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble a5;
                jdouble a6;
                PolyhedronsSet object((jobject) NULL);

                if (!parseArgs(args, "DDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                {
                  INT_CALL(object = PolyhedronsSet(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
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

          static PyObject *t_PolyhedronsSet_buildNew(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PolyhedronsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_PolyhedronsSet_firstIntersection(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Line a1((jobject) NULL);
            ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.firstIntersection(a0, a1));
              return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "firstIntersection", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_getBRep(t_PolyhedronsSet *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep result((jobject) NULL);
            OBJ_CALL(result = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(result);
          }

          static PyObject *t_PolyhedronsSet_rotate(t_PolyhedronsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_PolyhedronsSet_translate(t_PolyhedronsSet *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            PolyhedronsSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_PolyhedronsSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }
          static PyObject *t_PolyhedronsSet_get__parameters_(t_PolyhedronsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet_get__bRep(t_PolyhedronsSet *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet$BRep value((jobject) NULL);
            OBJ_CALL(value = self->object.getBRep());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet$BRep::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *MaxGapInterpolationGrid::class$ = NULL;
            jmethodID *MaxGapInterpolationGrid::mids$ = NULL;
            bool MaxGapInterpolationGrid::live$ = false;

            jclass MaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/MaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_getGridPoints_8f7fecc995f3f6c8] = env->getMethodID(cls, "getGridPoints", "(DD)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MaxGapInterpolationGrid::MaxGapInterpolationGrid(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

            JArray< jdouble > MaxGapInterpolationGrid::getGridPoints(jdouble a0, jdouble a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGridPoints_8f7fecc995f3f6c8], a0, a1));
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
          namespace utilities {
            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args);

            static PyMethodDef t_MaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_MaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_MaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_MaxGapInterpolationGrid_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(MaxGapInterpolationGrid, t_MaxGapInterpolationGrid, MaxGapInterpolationGrid);

            void t_MaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(MaxGapInterpolationGrid), &PY_TYPE_DEF(MaxGapInterpolationGrid), module, "MaxGapInterpolationGrid", 0);
            }

            void t_MaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "class_", make_descriptor(MaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_MaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_MaxGapInterpolationGrid::wrap_Object(MaxGapInterpolationGrid(((t_MaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_MaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_MaxGapInterpolationGrid_init_(t_MaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              MaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = MaxGapInterpolationGrid(a0));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_MaxGapInterpolationGrid_getGridPoints(t_MaxGapInterpolationGrid *self, PyObject *args)
            {
              jdouble a0;
              jdouble a1;
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/Generator.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *Generator::class$ = NULL;
          jmethodID *Generator::mids$ = NULL;
          bool Generator::live$ = false;

          jclass Generator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/Generator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addPropagator_d9786022257b6cc4] = env->getMethodID(cls, "addPropagator", "(Lorg/orekit/propagation/Propagator;)Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_addScheduler_9bc1d7f21ff11af8] = env->getMethodID(cls, "addScheduler", "(Lorg/orekit/estimation/measurements/generation/Scheduler;)V");
              mids$[mid_addSubscriber_91c817ce1de8728a] = env->getMethodID(cls, "addSubscriber", "(Lorg/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber;)V");
              mids$[mid_generate_d958a9bfde45c759] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getPropagator_e0d66209caa97f6d] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/estimation/measurements/ObservableSatellite;)Lorg/orekit/propagation/Propagator;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Generator::Generator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::orekit::estimation::measurements::ObservableSatellite Generator::addPropagator(const ::org::orekit::propagation::Propagator & a0) const
          {
            return ::org::orekit::estimation::measurements::ObservableSatellite(env->callObjectMethod(this$, mids$[mid_addPropagator_d9786022257b6cc4], a0.this$));
          }

          void Generator::addScheduler(const ::org::orekit::estimation::measurements::generation::Scheduler & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addScheduler_9bc1d7f21ff11af8], a0.this$);
          }

          void Generator::addSubscriber(const ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSubscriber_91c817ce1de8728a], a0.this$);
          }

          void Generator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_generate_d958a9bfde45c759], a0.this$, a1.this$);
          }

          ::org::orekit::propagation::Propagator Generator::getPropagator(const ::org::orekit::estimation::measurements::ObservableSatellite & a0) const
          {
            return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_e0d66209caa97f6d], a0.this$));
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
          static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Generator_init_(t_Generator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Generator_addPropagator(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_addScheduler(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_addSubscriber(t_Generator *self, PyObject *arg);
          static PyObject *t_Generator_generate(t_Generator *self, PyObject *args);
          static PyObject *t_Generator_getPropagator(t_Generator *self, PyObject *arg);

          static PyMethodDef t_Generator__methods_[] = {
            DECLARE_METHOD(t_Generator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Generator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Generator, addPropagator, METH_O),
            DECLARE_METHOD(t_Generator, addScheduler, METH_O),
            DECLARE_METHOD(t_Generator, addSubscriber, METH_O),
            DECLARE_METHOD(t_Generator, generate, METH_VARARGS),
            DECLARE_METHOD(t_Generator, getPropagator, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Generator)[] = {
            { Py_tp_methods, t_Generator__methods_ },
            { Py_tp_init, (void *) t_Generator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Generator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Generator, t_Generator, Generator);

          void t_Generator::install(PyObject *module)
          {
            installType(&PY_TYPE(Generator), &PY_TYPE_DEF(Generator), module, "Generator", 0);
          }

          void t_Generator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "class_", make_descriptor(Generator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "wrapfn_", make_descriptor(t_Generator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Generator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Generator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Generator::initializeClass, 1)))
              return NULL;
            return t_Generator::wrap_Object(Generator(((t_Generator *) arg)->object.this$));
          }
          static PyObject *t_Generator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Generator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Generator_init_(t_Generator *self, PyObject *args, PyObject *kwds)
          {
            Generator object((jobject) NULL);

            INT_CALL(object = Generator());
            self->object = object;

            return 0;
          }

          static PyObject *t_Generator_addPropagator(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::propagation::Propagator a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.addPropagator(a0));
              return ::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addPropagator", arg);
            return NULL;
          }

          static PyObject *t_Generator_addScheduler(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::generation::Scheduler a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::generation::Scheduler::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_Scheduler::parameters_))
            {
              OBJ_CALL(self->object.addScheduler(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addScheduler", arg);
            return NULL;
          }

          static PyObject *t_Generator_addSubscriber(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::generation::GeneratedMeasurementSubscriber::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSubscriber(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSubscriber", arg);
            return NULL;
          }

          static PyObject *t_Generator_generate(t_Generator *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.generate(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "generate", args);
            return NULL;
          }

          static PyObject *t_Generator_getPropagator(t_Generator *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
            ::org::orekit::propagation::Propagator result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPropagator(a0));
              return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPropagator", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AllowedSolution::class$ = NULL;
        jmethodID *AllowedSolution::mids$ = NULL;
        bool AllowedSolution::live$ = false;
        AllowedSolution *AllowedSolution::ABOVE_SIDE = NULL;
        AllowedSolution *AllowedSolution::ANY_SIDE = NULL;
        AllowedSolution *AllowedSolution::BELOW_SIDE = NULL;
        AllowedSolution *AllowedSolution::LEFT_SIDE = NULL;
        AllowedSolution *AllowedSolution::RIGHT_SIDE = NULL;

        jclass AllowedSolution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AllowedSolution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_0324f1c071c9adac] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/analysis/solvers/AllowedSolution;");
            mids$[mid_values_6a6476e5f598fd3c] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/analysis/solvers/AllowedSolution;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ABOVE_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ABOVE_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            ANY_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "ANY_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            BELOW_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "BELOW_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            LEFT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "LEFT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            RIGHT_SIDE = new AllowedSolution(env->getStaticObjectField(cls, "RIGHT_SIDE", "Lorg/hipparchus/analysis/solvers/AllowedSolution;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AllowedSolution AllowedSolution::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AllowedSolution(env->callStaticObjectMethod(cls, mids$[mid_valueOf_0324f1c071c9adac], a0.this$));
        }

        JArray< AllowedSolution > AllowedSolution::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AllowedSolution >(env->callStaticObjectMethod(cls, mids$[mid_values_6a6476e5f598fd3c]));
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
    namespace analysis {
      namespace solvers {
        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args);
        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AllowedSolution_values(PyTypeObject *type);
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data);
        static PyGetSetDef t_AllowedSolution__fields_[] = {
          DECLARE_GET_FIELD(t_AllowedSolution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AllowedSolution__methods_[] = {
          DECLARE_METHOD(t_AllowedSolution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, of_, METH_VARARGS),
          DECLARE_METHOD(t_AllowedSolution, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AllowedSolution, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AllowedSolution)[] = {
          { Py_tp_methods, t_AllowedSolution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AllowedSolution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AllowedSolution)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AllowedSolution, t_AllowedSolution, AllowedSolution);
        PyObject *t_AllowedSolution::wrap_Object(const AllowedSolution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AllowedSolution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AllowedSolution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AllowedSolution *self = (t_AllowedSolution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AllowedSolution::install(PyObject *module)
        {
          installType(&PY_TYPE(AllowedSolution), &PY_TYPE_DEF(AllowedSolution), module, "AllowedSolution", 0);
        }

        void t_AllowedSolution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "class_", make_descriptor(AllowedSolution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "wrapfn_", make_descriptor(t_AllowedSolution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "boxfn_", make_descriptor(boxObject));
          env->getClass(AllowedSolution::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ABOVE_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ABOVE_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "ANY_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::ANY_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "BELOW_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::BELOW_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "LEFT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::LEFT_SIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AllowedSolution), "RIGHT_SIDE", make_descriptor(t_AllowedSolution::wrap_Object(*AllowedSolution::RIGHT_SIDE)));
        }

        static PyObject *t_AllowedSolution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AllowedSolution::initializeClass, 1)))
            return NULL;
          return t_AllowedSolution::wrap_Object(AllowedSolution(((t_AllowedSolution *) arg)->object.this$));
        }
        static PyObject *t_AllowedSolution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AllowedSolution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AllowedSolution_of_(t_AllowedSolution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AllowedSolution_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AllowedSolution result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::valueOf(a0));
            return t_AllowedSolution::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AllowedSolution_values(PyTypeObject *type)
        {
          JArray< AllowedSolution > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::analysis::solvers::AllowedSolution::values());
          return JArray<jobject>(result.this$).wrap(t_AllowedSolution::wrap_jobject);
        }
        static PyObject *t_AllowedSolution_get__parameters_(t_AllowedSolution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/util/FieldBlendable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/text/NumberFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldVector3D::class$ = NULL;
          jmethodID *FieldVector3D::mids$ = NULL;
          bool FieldVector3D::live$ = false;

          jclass FieldVector3D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldVector3D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4c337e4c1ec6f647] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_e374b5b67eb31d56] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_28d2e63284f478a9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_e557ab7861ec00ef] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_a651cce8974e738f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_46c20bc1304e9cc4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_5b191078c5a85105] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_init$_af4d414625f043d5] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_7e156e7c81332423] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_63626756dee3b73a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_7d0dc0ba9dd5e66a] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_d87ce86302ad73a3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_8a88423916495b27] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_5b54afcd6d70763a] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_2787625ea479c9e3] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_init$_b0a48e37fefe939b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_add_8ff2edc0ecba4b6e] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_89718cf054290f11] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_2c84db90addb49ea] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_fe7cfe54af0f98e9] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_164cf969d0cc5992] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_add_2d47fae29783a957] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_angle_58fb8a4f78602c1f] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_7e4981d8fe7bfeef] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_angle_126ffc68bc5f01b4] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_blendArithmeticallyWith_e924de5c5bb207b6] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_8ff2edc0ecba4b6e] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_89718cf054290f11] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_5ff6d50248c66b4d] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_764ae5b7ae58b01f] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_crossProduct_525ce17d197a32fe] = env->getStaticMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_distance_561f21e3ac14fa34] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_5f51423dbe425445] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_58fb8a4f78602c1f] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_126ffc68bc5f01b4] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_7e4981d8fe7bfeef] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_561f21e3ac14fa34] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_5f51423dbe425445] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_58fb8a4f78602c1f] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_7e4981d8fe7bfeef] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance1_126ffc68bc5f01b4] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_561f21e3ac14fa34] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_5f51423dbe425445] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_58fb8a4f78602c1f] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_7e4981d8fe7bfeef] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceInf_126ffc68bc5f01b4] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_561f21e3ac14fa34] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_5f51423dbe425445] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_58fb8a4f78602c1f] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_126ffc68bc5f01b4] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distanceSq_7e4981d8fe7bfeef] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_561f21e3ac14fa34] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_5f51423dbe425445] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_58fb8a4f78602c1f] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_126ffc68bc5f01b4] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_dotProduct_7e4981d8fe7bfeef] = env->getStaticMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getAlpha_e6d4d3215c30992a] = env->getMethodID(cls, "getAlpha", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDelta_e6d4d3215c30992a] = env->getMethodID(cls, "getDelta", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getMinusI_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusJ_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getMinusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getMinusK_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getMinusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNaN_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNegativeInfinity_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getNegativeInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getNorm_e6d4d3215c30992a] = env->getMethodID(cls, "getNorm", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNorm1_e6d4d3215c30992a] = env->getMethodID(cls, "getNorm1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormInf_e6d4d3215c30992a] = env->getMethodID(cls, "getNormInf", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getNormSq_e6d4d3215c30992a] = env->getMethodID(cls, "getNormSq", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getPlusI_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getPlusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusJ_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getPlusJ", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPlusK_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getPlusK", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getPositiveInfinity_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getPositiveInfinity", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getX_e6d4d3215c30992a] = env->getMethodID(cls, "getX", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getY_e6d4d3215c30992a] = env->getMethodID(cls, "getY", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZ_e6d4d3215c30992a] = env->getMethodID(cls, "getZ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getZero_dc29118b4d22b28d] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_5791f80683b5227e] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_normalize_5791f80683b5227e] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_orthogonal_5791f80683b5227e] = env->getMethodID(cls, "orthogonal", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_14b0f58c06667f17] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_scalarMultiply_3023f195d3eecf7e] = env->getMethodID(cls, "scalarMultiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_8ff2edc0ecba4b6e] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_89718cf054290f11] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_2c84db90addb49ea] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_164cf969d0cc5992] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_fe7cfe54af0f98e9] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_subtract_2d47fae29783a957] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_toArray_01c7d10e96d5cf94] = env->getMethodID(cls, "toArray", "()[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_aed149be89fb33b9] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");
              mids$[mid_toVector3D_17a952530a808943] = env->getMethodID(cls, "toVector3D", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldVector3D::FieldVector3D(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c337e4c1ec6f647, a0.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e374b5b67eb31d56, a0, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_28d2e63284f478a9, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e557ab7861ec00ef, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::Field & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a651cce8974e738f, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46c20bc1304e9cc4, a0.this$, a1.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5b191078c5a85105, a0.this$, a1.this$, a2.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_af4d414625f043d5, a0, a1.this$, a2, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7e156e7c81332423, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_63626756dee3b73a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7d0dc0ba9dd5e66a, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d87ce86302ad73a3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a88423916495b27, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

          FieldVector3D::FieldVector3D(jdouble a0, const FieldVector3D & a1, jdouble a2, const FieldVector3D & a3, jdouble a4, const FieldVector3D & a5, jdouble a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5b54afcd6d70763a, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldVector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldVector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const FieldVector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2787625ea479c9e3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D::FieldVector3D(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a48e37fefe939b, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$)) {}

          FieldVector3D FieldVector3D::add(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_8ff2edc0ecba4b6e], a0.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_89718cf054290f11], a0.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_2c84db90addb49ea], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_fe7cfe54af0f98e9], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_164cf969d0cc5992], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::add(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_add_2d47fae29783a957], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_58fb8a4f78602c1f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_7e4981d8fe7bfeef], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::angle(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_angle_126ffc68bc5f01b4], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::blendArithmeticallyWith(const FieldVector3D & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_e924de5c5bb207b6], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_8ff2edc0ecba4b6e], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_crossProduct_89718cf054290f11], a0.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_5ff6d50248c66b4d], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_764ae5b7ae58b01f], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::crossProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_crossProduct_525ce17d197a32fe], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_561f21e3ac14fa34], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_5f51423dbe425445], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_58fb8a4f78602c1f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_126ffc68bc5f01b4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance_7e4981d8fe7bfeef], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_561f21e3ac14fa34], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance1_5f51423dbe425445], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_58fb8a4f78602c1f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_7e4981d8fe7bfeef], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distance1(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distance1_126ffc68bc5f01b4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_561f21e3ac14fa34], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceInf_5f51423dbe425445], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_58fb8a4f78602c1f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_7e4981d8fe7bfeef], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceInf(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceInf_126ffc68bc5f01b4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_561f21e3ac14fa34], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distanceSq_5f51423dbe425445], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_58fb8a4f78602c1f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_126ffc68bc5f01b4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::distanceSq(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_distanceSq_7e4981d8fe7bfeef], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_561f21e3ac14fa34], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_dotProduct_5f51423dbe425445], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_58fb8a4f78602c1f], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_126ffc68bc5f01b4], a0.this$, a1.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::dotProduct(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const FieldVector3D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_dotProduct_7e4981d8fe7bfeef], a0.this$, a1.this$));
          }

          jboolean FieldVector3D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getAlpha() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAlpha_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getDelta() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDelta_e6d4d3215c30992a]));
          }

          FieldVector3D FieldVector3D::getMinusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_dc29118b4d22b28d], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusJ_dc29118b4d22b28d], a0.this$));
          }

          FieldVector3D FieldVector3D::getMinusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getMinusK_dc29118b4d22b28d], a0.this$));
          }

          FieldVector3D FieldVector3D::getNaN(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNaN_dc29118b4d22b28d], a0.this$));
          }

          FieldVector3D FieldVector3D::getNegativeInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getNegativeInfinity_dc29118b4d22b28d], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNorm1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNorm1_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormInf() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormInf_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getNormSq() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getNormSq_e6d4d3215c30992a]));
          }

          FieldVector3D FieldVector3D::getPlusI(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusI_dc29118b4d22b28d], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusJ(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusJ_dc29118b4d22b28d], a0.this$));
          }

          FieldVector3D FieldVector3D::getPlusK(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPlusK_dc29118b4d22b28d], a0.this$));
          }

          FieldVector3D FieldVector3D::getPositiveInfinity(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getPositiveInfinity_dc29118b4d22b28d], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getX() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getX_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getY() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getY_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldVector3D::getZ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getZ_e6d4d3215c30992a]));
          }

          FieldVector3D FieldVector3D::getZero(const ::org::hipparchus::Field & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_getZero_dc29118b4d22b28d], a0.this$));
          }

          jint FieldVector3D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          jboolean FieldVector3D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
          }

          jboolean FieldVector3D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
          }

          FieldVector3D FieldVector3D::negate() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_negate_5791f80683b5227e]));
          }

          FieldVector3D FieldVector3D::normalize() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_normalize_5791f80683b5227e]));
          }

          FieldVector3D FieldVector3D::orthogonal() const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_orthogonal_5791f80683b5227e]));
          }

          FieldVector3D FieldVector3D::scalarMultiply(jdouble a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_14b0f58c06667f17], a0));
          }

          FieldVector3D FieldVector3D::scalarMultiply(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_3023f195d3eecf7e], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const FieldVector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_8ff2edc0ecba4b6e], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_89718cf054290f11], a0.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_2c84db90addb49ea], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const FieldVector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_164cf969d0cc5992], a0.this$, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(jdouble a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_fe7cfe54af0f98e9], a0, a1.this$));
          }

          FieldVector3D FieldVector3D::subtract(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            return FieldVector3D(env->callObjectMethod(this$, mids$[mid_subtract_2d47fae29783a957], a0.this$, a1.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > FieldVector3D::toArray() const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_toArray_01c7d10e96d5cf94]));
          }

          ::java::lang::String FieldVector3D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
          }

          ::java::lang::String FieldVector3D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_aed149be89fb33b9], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldVector3D::toVector3D() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toVector3D_17a952530a808943]));
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
          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args);
          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args);
          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self);
          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data);
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data);
          static PyGetSetDef t_FieldVector3D__fields_[] = {
            DECLARE_GET_FIELD(t_FieldVector3D, alpha),
            DECLARE_GET_FIELD(t_FieldVector3D, delta),
            DECLARE_GET_FIELD(t_FieldVector3D, infinite),
            DECLARE_GET_FIELD(t_FieldVector3D, naN),
            DECLARE_GET_FIELD(t_FieldVector3D, norm),
            DECLARE_GET_FIELD(t_FieldVector3D, norm1),
            DECLARE_GET_FIELD(t_FieldVector3D, normInf),
            DECLARE_GET_FIELD(t_FieldVector3D, normSq),
            DECLARE_GET_FIELD(t_FieldVector3D, x),
            DECLARE_GET_FIELD(t_FieldVector3D, y),
            DECLARE_GET_FIELD(t_FieldVector3D, z),
            DECLARE_GET_FIELD(t_FieldVector3D, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldVector3D__methods_[] = {
            DECLARE_METHOD(t_FieldVector3D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, add, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, blendArithmeticallyWith, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, crossProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, dotProduct_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, equals, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getDelta, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getMinusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getMinusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNaN, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNegativeInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getPlusI, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusJ, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPlusK, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getPositiveInfinity, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, getX, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getY, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZ, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, getZero, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldVector3D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, negate, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, normalize, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, orthogonal, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, scalarMultiply, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_FieldVector3D, toString, METH_VARARGS),
            DECLARE_METHOD(t_FieldVector3D, toVector3D, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldVector3D)[] = {
            { Py_tp_methods, t_FieldVector3D__methods_ },
            { Py_tp_init, (void *) t_FieldVector3D_init_ },
            { Py_tp_getset, t_FieldVector3D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldVector3D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldVector3D, t_FieldVector3D, FieldVector3D);
          PyObject *t_FieldVector3D::wrap_Object(const FieldVector3D& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldVector3D::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldVector3D::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldVector3D *self = (t_FieldVector3D *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldVector3D::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldVector3D), &PY_TYPE_DEF(FieldVector3D), module, "FieldVector3D", 0);
          }

          void t_FieldVector3D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "class_", make_descriptor(FieldVector3D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "wrapfn_", make_descriptor(t_FieldVector3D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldVector3D), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldVector3D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldVector3D::initializeClass, 1)))
              return NULL;
            return t_FieldVector3D::wrap_Object(FieldVector3D(((t_FieldVector3D *) arg)->object.this$));
          }
          static PyObject *t_FieldVector3D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldVector3D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldVector3D_of_(t_FieldVector3D *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldVector3D_init_(t_FieldVector3D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::Field a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                jdouble a2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                jdouble a4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                jdouble a6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "DKDKDKDK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_, &a2, &a3, &p3, t_FieldVector3D::parameters_, &a4, &a5, &p5, t_FieldVector3D::parameters_, &a6, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                FieldVector3D a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                FieldVector3D a5((jobject) NULL);
                PyTypeObject **p5;
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                FieldVector3D a7((jobject) NULL);
                PyTypeObject **p7;
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldVector3D::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, t_FieldVector3D::parameters_))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
                PyTypeObject **p6;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a7((jobject) NULL);
                FieldVector3D object((jobject) NULL);

                if (!parseArgs(args, "KkKkKkKk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7))
                {
                  INT_CALL(object = FieldVector3D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_FieldVector3D_add(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_angle(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::angle(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_blendArithmeticallyWith(t_FieldVector3D *self, PyObject *args)
          {
            FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "KK", FieldVector3D::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
              return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.crossProduct(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_crossProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::crossProduct(a0, a1));
                  return t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "crossProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance1(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance1(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance1_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance1(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceInf(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceInf(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distanceSq(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distanceSq(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_distance_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::distance(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.dotProduct(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_dotProduct_(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", FieldVector3D::initializeClass, FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "Kk", FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::dotProduct(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "dotProduct_", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_equals(t_FieldVector3D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_FieldVector3D_getAlpha(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getDelta(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getDelta());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getMinusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getMinusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getMinusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMinusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNaN(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNaN(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNaN", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNegativeInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getNegativeInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNegativeInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getNorm(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNorm1(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNorm1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormInf(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormInf());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getNormSq(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormSq());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getPlusI(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusI(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusI", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusJ(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusJ(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusJ", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPlusK(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPlusK(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPlusK", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getPositiveInfinity(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getPositiveInfinity(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPositiveInfinity", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_getX(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getX());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getY(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getY());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZ(t_FieldVector3D *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getZ());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldVector3D_getZero(PyTypeObject *type, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::getZero(a0));
              return t_FieldVector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getZero", arg);
            return NULL;
          }

          static PyObject *t_FieldVector3D_hashCode(t_FieldVector3D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_FieldVector3D_isInfinite(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_isNaN(t_FieldVector3D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_FieldVector3D_negate(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_normalize(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.normalize());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_orthogonal(t_FieldVector3D *self)
          {
            FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.orthogonal());
            return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldVector3D_scalarMultiply(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.scalarMultiply(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_subtract(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", FieldVector3D::initializeClass, &a0, &p0, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "DK", FieldVector3D::initializeClass, &a0, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                FieldVector3D a1((jobject) NULL);
                PyTypeObject **p1;
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "Kk", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_FieldVector3D_toArray(t_FieldVector3D *self)
          {
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          static PyObject *t_FieldVector3D_toString(t_FieldVector3D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }
              break;
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(FieldVector3D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_FieldVector3D_toVector3D(t_FieldVector3D *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.toVector3D());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }
          static PyObject *t_FieldVector3D_get__parameters_(t_FieldVector3D *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldVector3D_get__alpha(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__delta(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getDelta());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__infinite(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__naN(t_FieldVector3D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_FieldVector3D_get__norm(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__norm1(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNorm1());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normInf(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormInf());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__normSq(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormSq());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__x(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getX());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__y(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getY());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }

          static PyObject *t_FieldVector3D_get__z(t_FieldVector3D *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getZ());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
