#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/linear/DependentVectorsHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DependentVectorsHandler::class$ = NULL;
      jmethodID *DependentVectorsHandler::mids$ = NULL;
      bool DependentVectorsHandler::live$ = false;
      DependentVectorsHandler *DependentVectorsHandler::ADD_ZERO_VECTOR = NULL;
      DependentVectorsHandler *DependentVectorsHandler::GENERATE_EXCEPTION = NULL;
      DependentVectorsHandler *DependentVectorsHandler::REDUCE_BASE_TO_SPAN = NULL;

      jclass DependentVectorsHandler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DependentVectorsHandler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_manageDependent_2b51d970dd581ebc] = env->getMethodID(cls, "manageDependent", "(ILjava/util/List;)I");
          mids$[mid_manageDependent_b1c195a1927cd9ce] = env->getMethodID(cls, "manageDependent", "(Lorg/hipparchus/Field;ILjava/util/List;)I");
          mids$[mid_valueOf_fad7224d36107be1] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/linear/DependentVectorsHandler;");
          mids$[mid_values_ad7aba0118544edf] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/linear/DependentVectorsHandler;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ADD_ZERO_VECTOR = new DependentVectorsHandler(env->getStaticObjectField(cls, "ADD_ZERO_VECTOR", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          GENERATE_EXCEPTION = new DependentVectorsHandler(env->getStaticObjectField(cls, "GENERATE_EXCEPTION", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          REDUCE_BASE_TO_SPAN = new DependentVectorsHandler(env->getStaticObjectField(cls, "REDUCE_BASE_TO_SPAN", "Lorg/hipparchus/linear/DependentVectorsHandler;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint DependentVectorsHandler::manageDependent(jint a0, const ::java::util::List & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_2b51d970dd581ebc], a0, a1.this$);
      }

      jint DependentVectorsHandler::manageDependent(const ::org::hipparchus::Field & a0, jint a1, const ::java::util::List & a2) const
      {
        return env->callIntMethod(this$, mids$[mid_manageDependent_b1c195a1927cd9ce], a0.this$, a1, a2.this$);
      }

      DependentVectorsHandler DependentVectorsHandler::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DependentVectorsHandler(env->callStaticObjectMethod(cls, mids$[mid_valueOf_fad7224d36107be1], a0.this$));
      }

      JArray< DependentVectorsHandler > DependentVectorsHandler::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DependentVectorsHandler >(env->callStaticObjectMethod(cls, mids$[mid_values_ad7aba0118544edf]));
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
      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args);
      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type);
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data);
      static PyGetSetDef t_DependentVectorsHandler__fields_[] = {
        DECLARE_GET_FIELD(t_DependentVectorsHandler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DependentVectorsHandler__methods_[] = {
        DECLARE_METHOD(t_DependentVectorsHandler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, of_, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, manageDependent, METH_VARARGS),
        DECLARE_METHOD(t_DependentVectorsHandler, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DependentVectorsHandler, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DependentVectorsHandler)[] = {
        { Py_tp_methods, t_DependentVectorsHandler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DependentVectorsHandler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DependentVectorsHandler)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DependentVectorsHandler, t_DependentVectorsHandler, DependentVectorsHandler);
      PyObject *t_DependentVectorsHandler::wrap_Object(const DependentVectorsHandler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DependentVectorsHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DependentVectorsHandler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DependentVectorsHandler *self = (t_DependentVectorsHandler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DependentVectorsHandler::install(PyObject *module)
      {
        installType(&PY_TYPE(DependentVectorsHandler), &PY_TYPE_DEF(DependentVectorsHandler), module, "DependentVectorsHandler", 0);
      }

      void t_DependentVectorsHandler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "class_", make_descriptor(DependentVectorsHandler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "wrapfn_", make_descriptor(t_DependentVectorsHandler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "boxfn_", make_descriptor(boxObject));
        env->getClass(DependentVectorsHandler::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "ADD_ZERO_VECTOR", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::ADD_ZERO_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "GENERATE_EXCEPTION", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::GENERATE_EXCEPTION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DependentVectorsHandler), "REDUCE_BASE_TO_SPAN", make_descriptor(t_DependentVectorsHandler::wrap_Object(*DependentVectorsHandler::REDUCE_BASE_TO_SPAN)));
      }

      static PyObject *t_DependentVectorsHandler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DependentVectorsHandler::initializeClass, 1)))
          return NULL;
        return t_DependentVectorsHandler::wrap_Object(DependentVectorsHandler(((t_DependentVectorsHandler *) arg)->object.this$));
      }
      static PyObject *t_DependentVectorsHandler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DependentVectorsHandler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DependentVectorsHandler_of_(t_DependentVectorsHandler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DependentVectorsHandler_manageDependent(t_DependentVectorsHandler *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jint a0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint result;

            if (!parseArgs(args, "IK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint result;

            if (!parseArgs(args, "KIK", ::org::hipparchus::Field::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.manageDependent(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "manageDependent", args);
        return NULL;
      }

      static PyObject *t_DependentVectorsHandler_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DependentVectorsHandler result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::valueOf(a0));
          return t_DependentVectorsHandler::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DependentVectorsHandler_values(PyTypeObject *type)
      {
        JArray< DependentVectorsHandler > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::linear::DependentVectorsHandler::values());
        return JArray<jobject>(result.this$).wrap(t_DependentVectorsHandler::wrap_jobject);
      }
      static PyObject *t_DependentVectorsHandler_get__parameters_(t_DependentVectorsHandler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *IERSConventions$NutationCorrectionConverter::class$ = NULL;
      jmethodID *IERSConventions$NutationCorrectionConverter::mids$ = NULL;
      bool IERSConventions$NutationCorrectionConverter::live$ = false;

      jclass IERSConventions$NutationCorrectionConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/IERSConventions$NutationCorrectionConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toEquinox_1069b7874b582d78] = env->getMethodID(cls, "toEquinox", "(Lorg/orekit/time/AbsoluteDate;DD)[D");
          mids$[mid_toNonRotating_1069b7874b582d78] = env->getMethodID(cls, "toNonRotating", "(Lorg/orekit/time/AbsoluteDate;DD)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toEquinox(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toEquinox_1069b7874b582d78], a0.this$, a1, a2));
      }

      JArray< jdouble > IERSConventions$NutationCorrectionConverter::toNonRotating(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toNonRotating_1069b7874b582d78], a0.this$, a1, a2));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args);
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data);
      static PyGetSetDef t_IERSConventions$NutationCorrectionConverter__fields_[] = {
        DECLARE_GET_FIELD(t_IERSConventions$NutationCorrectionConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IERSConventions$NutationCorrectionConverter__methods_[] = {
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toEquinox, METH_VARARGS),
        DECLARE_METHOD(t_IERSConventions$NutationCorrectionConverter, toNonRotating, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IERSConventions$NutationCorrectionConverter)[] = {
        { Py_tp_methods, t_IERSConventions$NutationCorrectionConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IERSConventions$NutationCorrectionConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IERSConventions$NutationCorrectionConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IERSConventions$NutationCorrectionConverter, t_IERSConventions$NutationCorrectionConverter, IERSConventions$NutationCorrectionConverter);
      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_Object(const IERSConventions$NutationCorrectionConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_IERSConventions$NutationCorrectionConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_IERSConventions$NutationCorrectionConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_IERSConventions$NutationCorrectionConverter *self = (t_IERSConventions$NutationCorrectionConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_IERSConventions$NutationCorrectionConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(IERSConventions$NutationCorrectionConverter), &PY_TYPE_DEF(IERSConventions$NutationCorrectionConverter), module, "IERSConventions$NutationCorrectionConverter", 0);
      }

      void t_IERSConventions$NutationCorrectionConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "class_", make_descriptor(IERSConventions$NutationCorrectionConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "wrapfn_", make_descriptor(t_IERSConventions$NutationCorrectionConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IERSConventions$NutationCorrectionConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 1)))
          return NULL;
        return t_IERSConventions$NutationCorrectionConverter::wrap_Object(IERSConventions$NutationCorrectionConverter(((t_IERSConventions$NutationCorrectionConverter *) arg)->object.this$));
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IERSConventions$NutationCorrectionConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_of_(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toEquinox(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toEquinox(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toEquinox", args);
        return NULL;
      }

      static PyObject *t_IERSConventions$NutationCorrectionConverter_toNonRotating(t_IERSConventions$NutationCorrectionConverter *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.toNonRotating(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "toNonRotating", args);
        return NULL;
      }
      static PyObject *t_IERSConventions$NutationCorrectionConverter_get__parameters_(t_IERSConventions$NutationCorrectionConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/jacobians/MassDepletionDelay.h"
#include "org/orekit/forces/maneuvers/Maneuver.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace jacobians {

          ::java::lang::Class *MassDepletionDelay::class$ = NULL;
          jmethodID *MassDepletionDelay::mids$ = NULL;
          bool MassDepletionDelay::live$ = false;
          ::java::lang::String *MassDepletionDelay::PREFIX$ = NULL;

          jclass MassDepletionDelay::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/jacobians/MassDepletionDelay");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6a73343958e74b70] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/forces/maneuvers/Maneuver;)V");
              mids$[mid_combinedDerivatives_32bde69742c0babb] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              PREFIX$ = new ::java::lang::String(env->getStaticObjectField(cls, "PREFIX", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MassDepletionDelay::MassDepletionDelay(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::forces::maneuvers::Maneuver & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a73343958e74b70, a0.this$, a1, a2.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives MassDepletionDelay::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_32bde69742c0babb], a0.this$));
          }

          jint MassDepletionDelay::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
          }

          ::java::lang::String MassDepletionDelay::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          void MassDepletionDelay::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
        namespace jacobians {
          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg);
          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self);
          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args);
          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data);
          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data);
          static PyGetSetDef t_MassDepletionDelay__fields_[] = {
            DECLARE_GET_FIELD(t_MassDepletionDelay, dimension),
            DECLARE_GET_FIELD(t_MassDepletionDelay, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MassDepletionDelay__methods_[] = {
            DECLARE_METHOD(t_MassDepletionDelay, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MassDepletionDelay, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_MassDepletionDelay, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, getName, METH_NOARGS),
            DECLARE_METHOD(t_MassDepletionDelay, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MassDepletionDelay)[] = {
            { Py_tp_methods, t_MassDepletionDelay__methods_ },
            { Py_tp_init, (void *) t_MassDepletionDelay_init_ },
            { Py_tp_getset, t_MassDepletionDelay__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MassDepletionDelay)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MassDepletionDelay, t_MassDepletionDelay, MassDepletionDelay);

          void t_MassDepletionDelay::install(PyObject *module)
          {
            installType(&PY_TYPE(MassDepletionDelay), &PY_TYPE_DEF(MassDepletionDelay), module, "MassDepletionDelay", 0);
          }

          void t_MassDepletionDelay::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "class_", make_descriptor(MassDepletionDelay::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "wrapfn_", make_descriptor(t_MassDepletionDelay::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "boxfn_", make_descriptor(boxObject));
            env->getClass(MassDepletionDelay::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(MassDepletionDelay), "PREFIX", make_descriptor(j2p(*MassDepletionDelay::PREFIX$)));
          }

          static PyObject *t_MassDepletionDelay_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MassDepletionDelay::initializeClass, 1)))
              return NULL;
            return t_MassDepletionDelay::wrap_Object(MassDepletionDelay(((t_MassDepletionDelay *) arg)->object.this$));
          }
          static PyObject *t_MassDepletionDelay_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MassDepletionDelay::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MassDepletionDelay_init_(t_MassDepletionDelay *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean a1;
            ::org::orekit::forces::maneuvers::Maneuver a2((jobject) NULL);
            MassDepletionDelay object((jobject) NULL);

            if (!parseArgs(args, "sZk", ::org::orekit::forces::maneuvers::Maneuver::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MassDepletionDelay(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MassDepletionDelay_combinedDerivatives(t_MassDepletionDelay *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_MassDepletionDelay_getDimension(t_MassDepletionDelay *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_MassDepletionDelay_getName(t_MassDepletionDelay *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MassDepletionDelay_init(t_MassDepletionDelay *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_MassDepletionDelay_get__dimension(t_MassDepletionDelay *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_MassDepletionDelay_get__name(t_MassDepletionDelay *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
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

        ::java::lang::Class *AbstractPropagatorBuilder::class$ = NULL;
        jmethodID *AbstractPropagatorBuilder::mids$ = NULL;
        bool AbstractPropagatorBuilder::live$ = false;

        jclass AbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_de58ca8034102d77] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_deselectDynamicParameters_7ae3461a92a43152] = env->getMethodID(cls, "deselectDynamicParameters", "()V");
            mids$[mid_getAttitudeProvider_5cce95036ae870ba] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_aaa854c403487cf3] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_eb9e6df280c6daa0] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPositionScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getPositionScale", "()D");
            mids$[mid_getPropagationParametersDrivers_eb9e6df280c6daa0] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_7cdc325af0834901] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_e5b8a6a44355183e] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_setAttitudeProvider_8109c1a27d4471d3] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_getAdditionalDerivativesProviders_a6156df500549a58] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_addSupportedParameters_65de9727799c5641] = env->getMethodID(cls, "addSupportedParameters", "(Ljava/util/List;)V");
            mids$[mid_createInitialOrbit_551bf685780e3c1f] = env->getMethodID(cls, "createInitialOrbit", "()Lorg/orekit/orbits/Orbit;");
            mids$[mid_setParameters_ebc26dcaf4761286] = env->getMethodID(cls, "setParameters", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractPropagatorBuilder::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_de58ca8034102d77], a0.this$);
        }

        void AbstractPropagatorBuilder::deselectDynamicParameters() const
        {
          env->callVoidMethod(this$, mids$[mid_deselectDynamicParameters_7ae3461a92a43152]);
        }

        ::org::orekit::attitudes::AttitudeProvider AbstractPropagatorBuilder::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_5cce95036ae870ba]));
        }

        ::org::orekit::frames::Frame AbstractPropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::org::orekit::time::AbsoluteDate AbstractPropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_aaa854c403487cf3]));
        }

        jdouble AbstractPropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::orbits::OrbitType AbstractPropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_eb9e6df280c6daa0]));
        }

        ::org::orekit::orbits::PositionAngleType AbstractPropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
        }

        jdouble AbstractPropagatorBuilder::getPositionScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPositionScale_456d9a2f64d6b28d]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_eb9e6df280c6daa0]));
        }

        JArray< jdouble > AbstractPropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_7cdc325af0834901]));
        }

        void AbstractPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_e5b8a6a44355183e], a0.this$);
        }

        void AbstractPropagatorBuilder::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_8109c1a27d4471d3], a0.this$);
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
        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data);
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_AbstractPropagatorBuilder__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractPropagatorBuilder, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, frame),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, initialOrbitDate),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, mu),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitalParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionAngleType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionScale),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, propagationParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, selectedNormalizedParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, deselectDynamicParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getInitialOrbitDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitalParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionScale, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPropagationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getSelectedNormalizedParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, resetOrbit, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, setAttitudeProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_AbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractPropagatorBuilder, t_AbstractPropagatorBuilder, AbstractPropagatorBuilder);

        void t_AbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPropagatorBuilder), &PY_TYPE_DEF(AbstractPropagatorBuilder), module, "AbstractPropagatorBuilder", 0);
        }

        void t_AbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "class_", make_descriptor(AbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_AbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractPropagatorBuilder::wrap_Object(AbstractPropagatorBuilder(((t_AbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::AdditionalDerivativesProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::integration::AdditionalDerivativesProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.deselectDynamicParameters());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPositionScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelectedNormalizedParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetOrbit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "resetOrbit", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPositionScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelectedNormalizedParameters());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonEOPHistoryLoader.h"
#include "java/lang/Throwable.h"
#include "java/util/SortedSet.h"
#include "org/orekit/frames/EopHistoryLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/EOPEntry.h"
#include "org/orekit/utils/IERSConventions$NutationCorrectionConverter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonEOPHistoryLoader::class$ = NULL;
      jmethodID *PythonEOPHistoryLoader::mids$ = NULL;
      bool PythonEOPHistoryLoader::live$ = false;

      jclass PythonEOPHistoryLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonEOPHistoryLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_fillHistory_28ed459287c4a62f] = env->getMethodID(cls, "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEOPHistoryLoader::PythonEOPHistoryLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonEOPHistoryLoader::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonEOPHistoryLoader::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonEOPHistoryLoader::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self);
      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args);
      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data);
      static PyGetSetDef t_PythonEOPHistoryLoader__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEOPHistoryLoader, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEOPHistoryLoader__methods_[] = {
        DECLARE_METHOD(t_PythonEOPHistoryLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEOPHistoryLoader, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEOPHistoryLoader)[] = {
        { Py_tp_methods, t_PythonEOPHistoryLoader__methods_ },
        { Py_tp_init, (void *) t_PythonEOPHistoryLoader_init_ },
        { Py_tp_getset, t_PythonEOPHistoryLoader__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEOPHistoryLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEOPHistoryLoader, t_PythonEOPHistoryLoader, PythonEOPHistoryLoader);

      void t_PythonEOPHistoryLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEOPHistoryLoader), &PY_TYPE_DEF(PythonEOPHistoryLoader), module, "PythonEOPHistoryLoader", 1);
      }

      void t_PythonEOPHistoryLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "class_", make_descriptor(PythonEOPHistoryLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "wrapfn_", make_descriptor(t_PythonEOPHistoryLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEOPHistoryLoader), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEOPHistoryLoader::initializeClass);
        JNINativeMethod methods[] = {
          { "fillHistory", "(Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;Ljava/util/SortedSet;)V", (void *) t_PythonEOPHistoryLoader_fillHistory0 },
          { "pythonDecRef", "()V", (void *) t_PythonEOPHistoryLoader_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEOPHistoryLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEOPHistoryLoader::initializeClass, 1)))
          return NULL;
        return t_PythonEOPHistoryLoader::wrap_Object(PythonEOPHistoryLoader(((t_PythonEOPHistoryLoader *) arg)->object.this$));
      }
      static PyObject *t_PythonEOPHistoryLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEOPHistoryLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEOPHistoryLoader_init_(t_PythonEOPHistoryLoader *self, PyObject *args, PyObject *kwds)
      {
        PythonEOPHistoryLoader object((jobject) NULL);

        INT_CALL(object = PythonEOPHistoryLoader());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEOPHistoryLoader_finalize(t_PythonEOPHistoryLoader *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEOPHistoryLoader_pythonExtension(t_PythonEOPHistoryLoader *self, PyObject *args)
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

      static void JNICALL t_PythonEOPHistoryLoader_fillHistory0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions$NutationCorrectionConverter::wrap_Object(::org::orekit::utils::IERSConventions$NutationCorrectionConverter(a0));
        PyObject *o1 = ::java::util::t_SortedSet::wrap_Object(::java::util::SortedSet(a1));
        PyObject *result = PyObject_CallMethod(obj, "fillHistory", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonEOPHistoryLoader_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEOPHistoryLoader::mids$[PythonEOPHistoryLoader::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEOPHistoryLoader_get__self(t_PythonEOPHistoryLoader *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/LinearInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *LinearInterpolator::class$ = NULL;
        jmethodID *LinearInterpolator::mids$ = NULL;
        bool LinearInterpolator::live$ = false;

        jclass LinearInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/LinearInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_d587810b458fa2cb] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_c976cd8dd927abec] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearInterpolator::LinearInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction LinearInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_d587810b458fa2cb], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction LinearInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_c976cd8dd927abec], a0.this$, a1.this$));
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
      namespace interpolation {
        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args);

        static PyMethodDef t_LinearInterpolator__methods_[] = {
          DECLARE_METHOD(t_LinearInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearInterpolator)[] = {
          { Py_tp_methods, t_LinearInterpolator__methods_ },
          { Py_tp_init, (void *) t_LinearInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearInterpolator, t_LinearInterpolator, LinearInterpolator);

        void t_LinearInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearInterpolator), &PY_TYPE_DEF(LinearInterpolator), module, "LinearInterpolator", 0);
        }

        void t_LinearInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "class_", make_descriptor(LinearInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "wrapfn_", make_descriptor(t_LinearInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearInterpolator::initializeClass, 1)))
            return NULL;
          return t_LinearInterpolator::wrap_Object(LinearInterpolator(((t_LinearInterpolator *) arg)->object.this$));
        }
        static PyObject *t_LinearInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearInterpolator_init_(t_LinearInterpolator *self, PyObject *args, PyObject *kwds)
        {
          LinearInterpolator object((jobject) NULL);

          INT_CALL(object = LinearInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_LinearInterpolator_interpolate(t_LinearInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *AttitudeEphemerisFileParser::class$ = NULL;
        jmethodID *AttitudeEphemerisFileParser::mids$ = NULL;
        bool AttitudeEphemerisFileParser::live$ = false;

        jclass AttitudeEphemerisFileParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/AttitudeEphemerisFileParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_parse_11e1f1b4855d92ec] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/general/AttitudeEphemerisFile;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::files::general::AttitudeEphemerisFile AttitudeEphemerisFileParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::general::AttitudeEphemerisFile(env->callObjectMethod(this$, mids$[mid_parse_11e1f1b4855d92ec], a0.this$));
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
        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args);
        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg);
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data);
        static PyGetSetDef t_AttitudeEphemerisFileParser__fields_[] = {
          DECLARE_GET_FIELD(t_AttitudeEphemerisFileParser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AttitudeEphemerisFileParser__methods_[] = {
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, of_, METH_VARARGS),
          DECLARE_METHOD(t_AttitudeEphemerisFileParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AttitudeEphemerisFileParser)[] = {
          { Py_tp_methods, t_AttitudeEphemerisFileParser__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AttitudeEphemerisFileParser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AttitudeEphemerisFileParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AttitudeEphemerisFileParser, t_AttitudeEphemerisFileParser, AttitudeEphemerisFileParser);
        PyObject *t_AttitudeEphemerisFileParser::wrap_Object(const AttitudeEphemerisFileParser& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AttitudeEphemerisFileParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AttitudeEphemerisFileParser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AttitudeEphemerisFileParser *self = (t_AttitudeEphemerisFileParser *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AttitudeEphemerisFileParser::install(PyObject *module)
        {
          installType(&PY_TYPE(AttitudeEphemerisFileParser), &PY_TYPE_DEF(AttitudeEphemerisFileParser), module, "AttitudeEphemerisFileParser", 0);
        }

        void t_AttitudeEphemerisFileParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "class_", make_descriptor(AttitudeEphemerisFileParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "wrapfn_", make_descriptor(t_AttitudeEphemerisFileParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEphemerisFileParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AttitudeEphemerisFileParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 1)))
            return NULL;
          return t_AttitudeEphemerisFileParser::wrap_Object(AttitudeEphemerisFileParser(((t_AttitudeEphemerisFileParser *) arg)->object.this$));
        }
        static PyObject *t_AttitudeEphemerisFileParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AttitudeEphemerisFileParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AttitudeEphemerisFileParser_of_(t_AttitudeEphemerisFileParser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AttitudeEphemerisFileParser_parse(t_AttitudeEphemerisFileParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::general::AttitudeEphemerisFile result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::general::t_AttitudeEphemerisFile::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
        static PyObject *t_AttitudeEphemerisFileParser_get__parameters_(t_AttitudeEphemerisFileParser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LineSensor::class$ = NULL;
        jmethodID *LineSensor::mids$ = NULL;
        bool LineSensor::live$ = false;

        jclass LineSensor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LineSensor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_479a21e7eda36c51] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/rugged/linesensor/LineDatation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/los/TimeDependentLOS;)V");
            mids$[mid_dumpRate_77e0f9a1f260e2e5] = env->getMethodID(cls, "dumpRate", "(D)V");
            mids$[mid_getDate_a76f1ca2cc1b76e5] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLOS_c2e737cda6af3a23] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOS_969c0495d6f5d7aa] = env->getMethodID(cls, "getLOS", "(Lorg/orekit/time/AbsoluteDate;I)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getLOSDerivatives_8a5be8518b5b0d00] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLOSDerivatives_8118db2f928a9f34] = env->getMethodID(cls, "getLOSDerivatives", "(Lorg/orekit/time/AbsoluteDate;ILorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getLine_e912d21057defe63] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getNbPixels_f2f64475e4580546] = env->getMethodID(cls, "getNbPixels", "()I");
            mids$[mid_getParametersDrivers_a68a17dd093f796d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_getPosition_17a952530a808943] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getRate_0ba5fed9597b693e] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LineSensor::LineSensor(const ::java::lang::String & a0, const ::org::orekit::rugged::linesensor::LineDatation & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::los::TimeDependentLOS & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_479a21e7eda36c51, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        void LineSensor::dumpRate(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_dumpRate_77e0f9a1f260e2e5], a0);
        }

        ::org::orekit::time::AbsoluteDate LineSensor::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_a76f1ca2cc1b76e5], a0));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_c2e737cda6af3a23], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getLOS(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getLOS_969c0495d6f5d7aa], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_8a5be8518b5b0d00], a0.this$, a1, a2.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D LineSensor::getLOSDerivatives(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getLOSDerivatives_8118db2f928a9f34], a0.this$, a1, a2.this$));
        }

        jdouble LineSensor::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_e912d21057defe63], a0.this$);
        }

        ::java::lang::String LineSensor::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        jint LineSensor::getNbPixels() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixels_f2f64475e4580546]);
        }

        ::java::util::stream::Stream LineSensor::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a68a17dd093f796d]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D LineSensor::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_17a952530a808943]));
        }

        jdouble LineSensor::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_0ba5fed9597b693e], a0);
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
      namespace linesensor {
        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args);
        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_getName(t_LineSensor *self);
        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self);
        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self);
        static PyObject *t_LineSensor_getPosition(t_LineSensor *self);
        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg);
        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data);
        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data);
        static PyGetSetDef t_LineSensor__fields_[] = {
          DECLARE_GET_FIELD(t_LineSensor, name),
          DECLARE_GET_FIELD(t_LineSensor, nbPixels),
          DECLARE_GET_FIELD(t_LineSensor, parametersDrivers),
          DECLARE_GET_FIELD(t_LineSensor, position),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LineSensor__methods_[] = {
          DECLARE_METHOD(t_LineSensor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LineSensor, dumpRate, METH_O),
          DECLARE_METHOD(t_LineSensor, getDate, METH_O),
          DECLARE_METHOD(t_LineSensor, getLOS, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLOSDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_LineSensor, getLine, METH_O),
          DECLARE_METHOD(t_LineSensor, getName, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getNbPixels, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getPosition, METH_NOARGS),
          DECLARE_METHOD(t_LineSensor, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LineSensor)[] = {
          { Py_tp_methods, t_LineSensor__methods_ },
          { Py_tp_init, (void *) t_LineSensor_init_ },
          { Py_tp_getset, t_LineSensor__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LineSensor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LineSensor, t_LineSensor, LineSensor);

        void t_LineSensor::install(PyObject *module)
        {
          installType(&PY_TYPE(LineSensor), &PY_TYPE_DEF(LineSensor), module, "LineSensor", 0);
        }

        void t_LineSensor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "class_", make_descriptor(LineSensor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "wrapfn_", make_descriptor(t_LineSensor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LineSensor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LineSensor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LineSensor::initializeClass, 1)))
            return NULL;
          return t_LineSensor::wrap_Object(LineSensor(((t_LineSensor *) arg)->object.this$));
        }
        static PyObject *t_LineSensor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LineSensor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LineSensor_init_(t_LineSensor *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::rugged::linesensor::LineDatation a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::orekit::rugged::los::TimeDependentLOS a3((jobject) NULL);
          LineSensor object((jobject) NULL);

          if (!parseArgs(args, "skkk", ::org::orekit::rugged::linesensor::LineDatation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::los::TimeDependentLOS::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = LineSensor(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LineSensor_dumpRate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.dumpRate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "dumpRate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getDate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getLOS(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOS", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLOSDerivatives(t_LineSensor *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jint a1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "kIK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.getLOSDerivatives(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getLOSDerivatives", args);
          return NULL;
        }

        static PyObject *t_LineSensor_getLine(t_LineSensor *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_getName(t_LineSensor *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_LineSensor_getNbPixels(t_LineSensor *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixels());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_LineSensor_getParametersDrivers(t_LineSensor *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_LineSensor_getPosition(t_LineSensor *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_LineSensor_getRate(t_LineSensor *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }

        static PyObject *t_LineSensor_get__name(t_LineSensor *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_LineSensor_get__nbPixels(t_LineSensor *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixels());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_LineSensor_get__parametersDrivers(t_LineSensor *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_LineSensor_get__position(t_LineSensor *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPosition());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GLONASSEphemeris::class$ = NULL;
            jmethodID *GLONASSEphemeris::mids$ = NULL;
            bool GLONASSEphemeris::live$ = false;

            jclass GLONASSEphemeris::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GLONASSEphemeris");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b468b32595f64f31] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDD)V");
                mids$[mid_init$_95b15e482e88631c] = env->getMethodID(cls, "<init>", "(IIDDDDDDDDDDLorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getN4_f2f64475e4580546] = env->getMethodID(cls, "getN4", "()I");
                mids$[mid_getNa_f2f64475e4580546] = env->getMethodID(cls, "getNa", "()I");
                mids$[mid_getTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTime", "()D");
                mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
                mids$[mid_getXDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDot", "()D");
                mids$[mid_getXDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getXDotDot", "()D");
                mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");
                mids$[mid_getYDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDot", "()D");
                mids$[mid_getYDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getYDotDot", "()D");
                mids$[mid_getZ_456d9a2f64d6b28d] = env->getMethodID(cls, "getZ", "()D");
                mids$[mid_getZDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDot", "()D");
                mids$[mid_getZDotDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getZDotDot", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b468b32595f64f31, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11)) {}

            GLONASSEphemeris::GLONASSEphemeris(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_95b15e482e88631c, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$)) {}

            ::org::orekit::time::AbsoluteDate GLONASSEphemeris::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
            }

            jint GLONASSEphemeris::getN4() const
            {
              return env->callIntMethod(this$, mids$[mid_getN4_f2f64475e4580546]);
            }

            jint GLONASSEphemeris::getNa() const
            {
              return env->callIntMethod(this$, mids$[mid_getNa_f2f64475e4580546]);
            }

            jdouble GLONASSEphemeris::getTime() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTime_456d9a2f64d6b28d]);
            }

            jdouble GLONASSEphemeris::getX() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
            }

            jdouble GLONASSEphemeris::getXDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSEphemeris::getXDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getXDotDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSEphemeris::getY() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getY_456d9a2f64d6b28d]);
            }

            jdouble GLONASSEphemeris::getYDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSEphemeris::getYDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getYDotDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSEphemeris::getZ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZ_456d9a2f64d6b28d]);
            }

            jdouble GLONASSEphemeris::getZDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDot_456d9a2f64d6b28d]);
            }

            jdouble GLONASSEphemeris::getZDotDot() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getZDotDot_456d9a2f64d6b28d]);
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_GLONASSEphemeris_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GLONASSEphemeris_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GLONASSEphemeris_init_(t_GLONASSEphemeris *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GLONASSEphemeris_getDate(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getN4(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getNa(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getTime(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getX(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getXDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getXDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getY(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getYDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getYDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZ(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_getZDotDot(t_GLONASSEphemeris *self);
            static PyObject *t_GLONASSEphemeris_get__date(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__n4(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__na(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__time(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__x(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__xDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__xDotDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__y(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__yDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__yDotDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__z(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__zDot(t_GLONASSEphemeris *self, void *data);
            static PyObject *t_GLONASSEphemeris_get__zDotDot(t_GLONASSEphemeris *self, void *data);
            static PyGetSetDef t_GLONASSEphemeris__fields_[] = {
              DECLARE_GET_FIELD(t_GLONASSEphemeris, date),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, n4),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, na),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, time),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, x),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, xDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, xDotDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, y),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, yDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, yDotDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, z),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, zDot),
              DECLARE_GET_FIELD(t_GLONASSEphemeris, zDotDot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_GLONASSEphemeris__methods_[] = {
              DECLARE_METHOD(t_GLONASSEphemeris, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSEphemeris, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GLONASSEphemeris, getDate, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getN4, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getNa, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getTime, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getX, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getXDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getXDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getY, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getYDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getYDotDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZ, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZDot, METH_NOARGS),
              DECLARE_METHOD(t_GLONASSEphemeris, getZDotDot, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GLONASSEphemeris)[] = {
              { Py_tp_methods, t_GLONASSEphemeris__methods_ },
              { Py_tp_init, (void *) t_GLONASSEphemeris_init_ },
              { Py_tp_getset, t_GLONASSEphemeris__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GLONASSEphemeris)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GLONASSEphemeris, t_GLONASSEphemeris, GLONASSEphemeris);

            void t_GLONASSEphemeris::install(PyObject *module)
            {
              installType(&PY_TYPE(GLONASSEphemeris), &PY_TYPE_DEF(GLONASSEphemeris), module, "GLONASSEphemeris", 0);
            }

            void t_GLONASSEphemeris::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "class_", make_descriptor(GLONASSEphemeris::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "wrapfn_", make_descriptor(t_GLONASSEphemeris::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSEphemeris), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GLONASSEphemeris_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GLONASSEphemeris::initializeClass, 1)))
                return NULL;
              return t_GLONASSEphemeris::wrap_Object(GLONASSEphemeris(((t_GLONASSEphemeris *) arg)->object.this$));
            }
            static PyObject *t_GLONASSEphemeris_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GLONASSEphemeris::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GLONASSEphemeris_init_(t_GLONASSEphemeris *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 12:
                {
                  jint a0;
                  jint a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  GLONASSEphemeris object((jobject) NULL);

                  if (!parseArgs(args, "IIDDDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
                  {
                    INT_CALL(object = GLONASSEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 13:
                {
                  jint a0;
                  jint a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  jdouble a5;
                  jdouble a6;
                  jdouble a7;
                  jdouble a8;
                  jdouble a9;
                  jdouble a10;
                  jdouble a11;
                  ::org::orekit::time::AbsoluteDate a12((jobject) NULL);
                  GLONASSEphemeris object((jobject) NULL);

                  if (!parseArgs(args, "IIDDDDDDDDDDk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
                  {
                    INT_CALL(object = GLONASSEphemeris(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

            static PyObject *t_GLONASSEphemeris_getDate(t_GLONASSEphemeris *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_GLONASSEphemeris_getN4(t_GLONASSEphemeris *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getN4());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSEphemeris_getNa(t_GLONASSEphemeris *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getNa());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_GLONASSEphemeris_getTime(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTime());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getX(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getX());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getXDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getXDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getXDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getY(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getY());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getYDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getYDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getYDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZ(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_getZDotDot(t_GLONASSEphemeris *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getZDotDot());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_GLONASSEphemeris_get__date(t_GLONASSEphemeris *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_GLONASSEphemeris_get__n4(t_GLONASSEphemeris *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getN4());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSEphemeris_get__na(t_GLONASSEphemeris *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getNa());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_GLONASSEphemeris_get__time(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTime());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__x(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getX());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__xDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__xDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getXDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__y(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getY());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__yDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__yDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getYDotDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__z(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__zDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDot());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_GLONASSEphemeris_get__zDotDot(t_GLONASSEphemeris *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getZDotDot());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/AGILeapSecondFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AGILeapSecondFilesLoader::class$ = NULL;
      jmethodID *AGILeapSecondFilesLoader::mids$ = NULL;
      bool AGILeapSecondFilesLoader::live$ = false;
      ::java::lang::String *AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES = NULL;

      jclass AGILeapSecondFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AGILeapSecondFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e939c6558ae8d313] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_2a9119a84e92f14a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_a6156df500549a58] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_e939c6558ae8d313, a0.this$)) {}

      AGILeapSecondFilesLoader::AGILeapSecondFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_2a9119a84e92f14a, a0.this$, a1.this$)) {}

      ::java::util::List AGILeapSecondFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_a6156df500549a58]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/time/AGILeapSecondFilesLoader$Parser.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self);

      static PyMethodDef t_AGILeapSecondFilesLoader__methods_[] = {
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AGILeapSecondFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AGILeapSecondFilesLoader)[] = {
        { Py_tp_methods, t_AGILeapSecondFilesLoader__methods_ },
        { Py_tp_init, (void *) t_AGILeapSecondFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AGILeapSecondFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(AGILeapSecondFilesLoader, t_AGILeapSecondFilesLoader, AGILeapSecondFilesLoader);

      void t_AGILeapSecondFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(AGILeapSecondFilesLoader), &PY_TYPE_DEF(AGILeapSecondFilesLoader), module, "AGILeapSecondFilesLoader", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "Parser", make_descriptor(&PY_TYPE_DEF(AGILeapSecondFilesLoader$Parser)));
      }

      void t_AGILeapSecondFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "class_", make_descriptor(AGILeapSecondFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "wrapfn_", make_descriptor(t_AGILeapSecondFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "boxfn_", make_descriptor(boxObject));
        env->getClass(AGILeapSecondFilesLoader::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AGILeapSecondFilesLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*AGILeapSecondFilesLoader::DEFAULT_SUPPORTED_NAMES)));
      }

      static PyObject *t_AGILeapSecondFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 1)))
          return NULL;
        return t_AGILeapSecondFilesLoader::wrap_Object(AGILeapSecondFilesLoader(((t_AGILeapSecondFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_AGILeapSecondFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AGILeapSecondFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_AGILeapSecondFilesLoader_init_(t_AGILeapSecondFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            AGILeapSecondFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AGILeapSecondFilesLoader(a0, a1));
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

      static PyObject *t_AGILeapSecondFilesLoader_loadOffsets(t_AGILeapSecondFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/OceanTides.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *OceanTides::class$ = NULL;
        jmethodID *OceanTides::mids$ = NULL;
        bool OceanTides::live$ = false;
        jint OceanTides::DEFAULT_POINTS = (jint) 0;
        jdouble OceanTides::DEFAULT_STEP = (jdouble) 0;

        jclass OceanTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/OceanTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7c496bbae0cbf081] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_e9264073f6526404] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_ab7510ef7b894b24] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;Lorg/orekit/forces/gravity/potential/GravityFields;)V");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jint a3, jint a4, const ::org::orekit::utils::IERSConventions & a5, const ::org::orekit::time::UT1Scale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7c496bbae0cbf081, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e9264073f6526404, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9, const ::org::orekit::forces::gravity::potential::GravityFields & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab7510ef7b894b24, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$, a10.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OceanTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        jboolean OceanTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::stream::Stream OceanTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
        }

        ::java::util::stream::Stream OceanTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
        }

        ::java::util::List OceanTides::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args);
        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self);
        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self);
        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg);
        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self);
        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data);
        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data);
        static PyGetSetDef t_OceanTides__fields_[] = {
          DECLARE_GET_FIELD(t_OceanTides, eventDetectors),
          DECLARE_GET_FIELD(t_OceanTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OceanTides__methods_[] = {
          DECLARE_METHOD(t_OceanTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_OceanTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_OceanTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OceanTides)[] = {
          { Py_tp_methods, t_OceanTides__methods_ },
          { Py_tp_init, (void *) t_OceanTides_init_ },
          { Py_tp_getset, t_OceanTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OceanTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OceanTides, t_OceanTides, OceanTides);

        void t_OceanTides::install(PyObject *module)
        {
          installType(&PY_TYPE(OceanTides), &PY_TYPE_DEF(OceanTides), module, "OceanTides", 0);
        }

        void t_OceanTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "class_", make_descriptor(OceanTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "wrapfn_", make_descriptor(t_OceanTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(OceanTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_POINTS", make_descriptor(OceanTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_STEP", make_descriptor(OceanTides::DEFAULT_STEP));
        }

        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OceanTides::initializeClass, 1)))
            return NULL;
          return t_OceanTides::wrap_Object(OceanTides(((t_OceanTides *) arg)->object.this$));
        }
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OceanTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::utils::IERSConventions a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::orekit::time::UT1Scale a6((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              ::org::orekit::forces::gravity::potential::GravityFields a10((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9, &a10))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
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

        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
          return NULL;
        }

        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/GMSTScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *GMSTScale::class$ = NULL;
      jmethodID *GMSTScale::mids$ = NULL;
      bool GMSTScale::live$ = false;

      jclass GMSTScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/GMSTScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String GMSTScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble GMSTScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement GMSTScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      ::java::lang::String GMSTScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_GMSTScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GMSTScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GMSTScale_getName(t_GMSTScale *self);
      static PyObject *t_GMSTScale_offsetFromTAI(t_GMSTScale *self, PyObject *args);
      static PyObject *t_GMSTScale_toString(t_GMSTScale *self, PyObject *args);
      static PyObject *t_GMSTScale_get__name(t_GMSTScale *self, void *data);
      static PyGetSetDef t_GMSTScale__fields_[] = {
        DECLARE_GET_FIELD(t_GMSTScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_GMSTScale__methods_[] = {
        DECLARE_METHOD(t_GMSTScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GMSTScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GMSTScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_GMSTScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_GMSTScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GMSTScale)[] = {
        { Py_tp_methods, t_GMSTScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_GMSTScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GMSTScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GMSTScale, t_GMSTScale, GMSTScale);

      void t_GMSTScale::install(PyObject *module)
      {
        installType(&PY_TYPE(GMSTScale), &PY_TYPE_DEF(GMSTScale), module, "GMSTScale", 0);
      }

      void t_GMSTScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "class_", make_descriptor(GMSTScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "wrapfn_", make_descriptor(t_GMSTScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GMSTScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GMSTScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GMSTScale::initializeClass, 1)))
          return NULL;
        return t_GMSTScale::wrap_Object(GMSTScale(((t_GMSTScale *) arg)->object.this$));
      }
      static PyObject *t_GMSTScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GMSTScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_GMSTScale_getName(t_GMSTScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_GMSTScale_offsetFromTAI(t_GMSTScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.offsetFromTAI(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "offsetFromTAI", args);
        return NULL;
      }

      static PyObject *t_GMSTScale_toString(t_GMSTScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(GMSTScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_GMSTScale_get__name(t_GMSTScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/CompositeDataContext.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "org/orekit/bodies/CelestialBodies.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *CompositeDataContext::class$ = NULL;
      jmethodID *CompositeDataContext::mids$ = NULL;
      bool CompositeDataContext::live$ = false;

      jclass CompositeDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/CompositeDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_de0d54bbff234e7f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;Lorg/orekit/frames/Frames;Lorg/orekit/bodies/CelestialBodies;Lorg/orekit/forces/gravity/potential/GravityFields;Lorg/orekit/models/earth/GeoMagneticFields;)V");
          mids$[mid_getCelestialBodies_6b0502739530e079] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/CelestialBodies;");
          mids$[mid_getFrames_6a1d0c689f9e630b] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/Frames;");
          mids$[mid_getGeoMagneticFields_cfa6ccfb44255043] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/GeoMagneticFields;");
          mids$[mid_getGravityFields_f5e7fe4d5e10b51a] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/GravityFields;");
          mids$[mid_getTimeScales_5912acf3bafa785f] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/TimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CompositeDataContext::CompositeDataContext(const ::org::orekit::time::TimeScales & a0, const ::org::orekit::frames::Frames & a1, const ::org::orekit::bodies::CelestialBodies & a2, const ::org::orekit::forces::gravity::potential::GravityFields & a3, const ::org::orekit::models::earth::GeoMagneticFields & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de0d54bbff234e7f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::bodies::CelestialBodies CompositeDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::CelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_6b0502739530e079]));
      }

      ::org::orekit::frames::Frames CompositeDataContext::getFrames() const
      {
        return ::org::orekit::frames::Frames(env->callObjectMethod(this$, mids$[mid_getFrames_6a1d0c689f9e630b]));
      }

      ::org::orekit::models::earth::GeoMagneticFields CompositeDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::GeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_cfa6ccfb44255043]));
      }

      ::org::orekit::forces::gravity::potential::GravityFields CompositeDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::GravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_f5e7fe4d5e10b51a]));
      }

      ::org::orekit::time::TimeScales CompositeDataContext::getTimeScales() const
      {
        return ::org::orekit::time::TimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_5912acf3bafa785f]));
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
      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self);
      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data);
      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data);
      static PyGetSetDef t_CompositeDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_CompositeDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_CompositeDataContext, frames),
        DECLARE_GET_FIELD(t_CompositeDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, gravityFields),
        DECLARE_GET_FIELD(t_CompositeDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CompositeDataContext__methods_[] = {
        DECLARE_METHOD(t_CompositeDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CompositeDataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_CompositeDataContext, getTimeScales, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CompositeDataContext)[] = {
        { Py_tp_methods, t_CompositeDataContext__methods_ },
        { Py_tp_init, (void *) t_CompositeDataContext_init_ },
        { Py_tp_getset, t_CompositeDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CompositeDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CompositeDataContext, t_CompositeDataContext, CompositeDataContext);

      void t_CompositeDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(CompositeDataContext), &PY_TYPE_DEF(CompositeDataContext), module, "CompositeDataContext", 0);
      }

      void t_CompositeDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "class_", make_descriptor(CompositeDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "wrapfn_", make_descriptor(t_CompositeDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CompositeDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CompositeDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CompositeDataContext::initializeClass, 1)))
          return NULL;
        return t_CompositeDataContext::wrap_Object(CompositeDataContext(((t_CompositeDataContext *) arg)->object.this$));
      }
      static PyObject *t_CompositeDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CompositeDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CompositeDataContext_init_(t_CompositeDataContext *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::TimeScales a0((jobject) NULL);
        ::org::orekit::frames::Frames a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBodies a2((jobject) NULL);
        ::org::orekit::forces::gravity::potential::GravityFields a3((jobject) NULL);
        ::org::orekit::models::earth::GeoMagneticFields a4((jobject) NULL);
        CompositeDataContext object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::time::TimeScales::initializeClass, ::org::orekit::frames::Frames::initializeClass, ::org::orekit::bodies::CelestialBodies::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, ::org::orekit::models::earth::GeoMagneticFields::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = CompositeDataContext(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CompositeDataContext_getCelestialBodies(t_CompositeDataContext *self)
      {
        ::org::orekit::bodies::CelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getFrames(t_CompositeDataContext *self)
      {
        ::org::orekit::frames::Frames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGeoMagneticFields(t_CompositeDataContext *self)
      {
        ::org::orekit::models::earth::GeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getGravityFields(t_CompositeDataContext *self)
      {
        ::org::orekit::forces::gravity::potential::GravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_getTimeScales(t_CompositeDataContext *self)
      {
        ::org::orekit::time::TimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(result);
      }

      static PyObject *t_CompositeDataContext_get__celestialBodies(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::bodies::CelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_CelestialBodies::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__frames(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::frames::Frames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_Frames::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__geoMagneticFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::models::earth::GeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_GeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__gravityFields(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::GravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_GravityFields::wrap_Object(value);
      }

      static PyObject *t_CompositeDataContext_get__timeScales(t_CompositeDataContext *self, void *data)
      {
        ::org::orekit::time::TimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_TimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/events/ODEStepEndHandler.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/ODEEventDetector.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ODEIntegrator::class$ = NULL;
      jmethodID *ODEIntegrator::mids$ = NULL;
      bool ODEIntegrator::live$ = false;

      jclass ODEIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ODEIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addEventDetector_95ad63d6e12b665a] = env->getMethodID(cls, "addEventDetector", "(Lorg/hipparchus/ode/events/ODEEventDetector;)V");
          mids$[mid_addStepEndHandler_d6f7dd010125fe2a] = env->getMethodID(cls, "addStepEndHandler", "(Lorg/hipparchus/ode/events/ODEStepEndHandler;)V");
          mids$[mid_addStepHandler_e242ed1b39c6a814] = env->getMethodID(cls, "addStepHandler", "(Lorg/hipparchus/ode/sampling/ODEStepHandler;)V");
          mids$[mid_clearEventDetectors_7ae3461a92a43152] = env->getMethodID(cls, "clearEventDetectors", "()V");
          mids$[mid_clearStepEndHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepEndHandlers", "()V");
          mids$[mid_clearStepHandlers_7ae3461a92a43152] = env->getMethodID(cls, "clearStepHandlers", "()V");
          mids$[mid_getCurrentSignedStepsize_456d9a2f64d6b28d] = env->getMethodID(cls, "getCurrentSignedStepsize", "()D");
          mids$[mid_getEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getEventDetectors_a6156df500549a58] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/List;");
          mids$[mid_getMaxEvaluations_f2f64475e4580546] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getStepEndHandlers_a6156df500549a58] = env->getMethodID(cls, "getStepEndHandlers", "()Ljava/util/List;");
          mids$[mid_getStepHandlers_a6156df500549a58] = env->getMethodID(cls, "getStepHandlers", "()Ljava/util/List;");
          mids$[mid_getStepStart_ced1effea9e5e5d4] = env->getMethodID(cls, "getStepStart", "()Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_7efcd57267e426c3] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_integrate_edafc9d5ce32b580] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
          mids$[mid_setMaxEvaluations_0a2a1ac2721c0336] = env->getMethodID(cls, "setMaxEvaluations", "(I)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void ODEIntegrator::addEventDetector(const ::org::hipparchus::ode::events::ODEEventDetector & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addEventDetector_95ad63d6e12b665a], a0.this$);
      }

      void ODEIntegrator::addStepEndHandler(const ::org::hipparchus::ode::events::ODEStepEndHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepEndHandler_d6f7dd010125fe2a], a0.this$);
      }

      void ODEIntegrator::addStepHandler(const ::org::hipparchus::ode::sampling::ODEStepHandler & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addStepHandler_e242ed1b39c6a814], a0.this$);
      }

      void ODEIntegrator::clearEventDetectors() const
      {
        env->callVoidMethod(this$, mids$[mid_clearEventDetectors_7ae3461a92a43152]);
      }

      void ODEIntegrator::clearStepEndHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepEndHandlers_7ae3461a92a43152]);
      }

      void ODEIntegrator::clearStepHandlers() const
      {
        env->callVoidMethod(this$, mids$[mid_clearStepHandlers_7ae3461a92a43152]);
      }

      jdouble ODEIntegrator::getCurrentSignedStepsize() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCurrentSignedStepsize_456d9a2f64d6b28d]);
      }

      jint ODEIntegrator::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_f2f64475e4580546]);
      }

      ::java::util::List ODEIntegrator::getEventDetectors() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a6156df500549a58]));
      }

      jint ODEIntegrator::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_f2f64475e4580546]);
      }

      ::java::lang::String ODEIntegrator::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      ::java::util::List ODEIntegrator::getStepEndHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepEndHandlers_a6156df500549a58]));
      }

      ::java::util::List ODEIntegrator::getStepHandlers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStepHandlers_a6156df500549a58]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::getStepStart() const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getStepStart_ced1effea9e5e5d4]));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7efcd57267e426c3], a0.this$, a1.this$, a2));
      }

      ::org::hipparchus::ode::ODEStateAndDerivative ODEIntegrator::integrate(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
      {
        return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_edafc9d5ce32b580], a0.this$, a1.this$, a2));
      }

      void ODEIntegrator::setMaxEvaluations(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxEvaluations_0a2a1ac2721c0336], a0);
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
      static PyObject *t_ODEIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ODEIntegrator_addEventDetector(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_addStepEndHandler(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_addStepHandler(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_clearEventDetectors(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_clearStepEndHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_clearStepHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getCurrentSignedStepsize(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getEvaluations(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getEventDetectors(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getMaxEvaluations(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getName(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepEndHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepHandlers(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_getStepStart(t_ODEIntegrator *self);
      static PyObject *t_ODEIntegrator_integrate(t_ODEIntegrator *self, PyObject *args);
      static PyObject *t_ODEIntegrator_setMaxEvaluations(t_ODEIntegrator *self, PyObject *arg);
      static PyObject *t_ODEIntegrator_get__currentSignedStepsize(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__evaluations(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__eventDetectors(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__maxEvaluations(t_ODEIntegrator *self, void *data);
      static int t_ODEIntegrator_set__maxEvaluations(t_ODEIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_ODEIntegrator_get__name(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepEndHandlers(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepHandlers(t_ODEIntegrator *self, void *data);
      static PyObject *t_ODEIntegrator_get__stepStart(t_ODEIntegrator *self, void *data);
      static PyGetSetDef t_ODEIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_ODEIntegrator, currentSignedStepsize),
        DECLARE_GET_FIELD(t_ODEIntegrator, evaluations),
        DECLARE_GET_FIELD(t_ODEIntegrator, eventDetectors),
        DECLARE_GETSET_FIELD(t_ODEIntegrator, maxEvaluations),
        DECLARE_GET_FIELD(t_ODEIntegrator, name),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepEndHandlers),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepHandlers),
        DECLARE_GET_FIELD(t_ODEIntegrator, stepStart),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ODEIntegrator__methods_[] = {
        DECLARE_METHOD(t_ODEIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ODEIntegrator, addEventDetector, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, addStepEndHandler, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, addStepHandler, METH_O),
        DECLARE_METHOD(t_ODEIntegrator, clearEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, clearStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, clearStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getCurrentSignedStepsize, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getName, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepEndHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepHandlers, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, getStepStart, METH_NOARGS),
        DECLARE_METHOD(t_ODEIntegrator, integrate, METH_VARARGS),
        DECLARE_METHOD(t_ODEIntegrator, setMaxEvaluations, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ODEIntegrator)[] = {
        { Py_tp_methods, t_ODEIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ODEIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ODEIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ODEIntegrator, t_ODEIntegrator, ODEIntegrator);

      void t_ODEIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(ODEIntegrator), &PY_TYPE_DEF(ODEIntegrator), module, "ODEIntegrator", 0);
      }

      void t_ODEIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "class_", make_descriptor(ODEIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "wrapfn_", make_descriptor(t_ODEIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ODEIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ODEIntegrator::initializeClass, 1)))
          return NULL;
        return t_ODEIntegrator::wrap_Object(ODEIntegrator(((t_ODEIntegrator *) arg)->object.this$));
      }
      static PyObject *t_ODEIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ODEIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ODEIntegrator_addEventDetector(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEEventDetector a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEEventDetector::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addEventDetector(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addEventDetector", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_addStepEndHandler(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::events::ODEStepEndHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::events::ODEStepEndHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepEndHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepEndHandler", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_addStepHandler(t_ODEIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::ODEStepHandler a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStepHandler::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addStepHandler(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addStepHandler", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_clearEventDetectors(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearEventDetectors());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_clearStepEndHandlers(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepEndHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_clearStepHandlers(t_ODEIntegrator *self)
      {
        OBJ_CALL(self->object.clearStepHandlers());
        Py_RETURN_NONE;
      }

      static PyObject *t_ODEIntegrator_getCurrentSignedStepsize(t_ODEIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ODEIntegrator_getEvaluations(t_ODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEIntegrator_getEventDetectors(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEEventDetector));
      }

      static PyObject *t_ODEIntegrator_getMaxEvaluations(t_ODEIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ODEIntegrator_getName(t_ODEIntegrator *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ODEIntegrator_getStepEndHandlers(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::events::PY_TYPE(ODEStepEndHandler));
      }

      static PyObject *t_ODEIntegrator_getStepHandlers(t_ODEIntegrator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::ode::sampling::PY_TYPE(ODEStepHandler));
      }

      static PyObject *t_ODEIntegrator_getStepStart(t_ODEIntegrator *self)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);
        OBJ_CALL(result = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
      }

      static PyObject *t_ODEIntegrator_integrate(t_ODEIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2));
              return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
            ::org::hipparchus::ode::ODEState a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2));
              return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_setMaxEvaluations(t_ODEIntegrator *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setMaxEvaluations(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxEvaluations", arg);
        return NULL;
      }

      static PyObject *t_ODEIntegrator_get__currentSignedStepsize(t_ODEIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCurrentSignedStepsize());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ODEIntegrator_get__evaluations(t_ODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ODEIntegrator_get__eventDetectors(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__maxEvaluations(t_ODEIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }
      static int t_ODEIntegrator_set__maxEvaluations(t_ODEIntegrator *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setMaxEvaluations(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
        return -1;
      }

      static PyObject *t_ODEIntegrator_get__name(t_ODEIntegrator *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_ODEIntegrator_get__stepEndHandlers(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepEndHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__stepHandlers(t_ODEIntegrator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepHandlers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ODEIntegrator_get__stepStart(t_ODEIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEStateAndDerivative value((jobject) NULL);
        OBJ_CALL(value = self->object.getStepStart());
        return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/TidalDisplacement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *TidalDisplacement::class$ = NULL;
          jmethodID *TidalDisplacement::mids$ = NULL;
          bool TidalDisplacement::live$ = false;

          jclass TidalDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/TidalDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70c7b539bacfcf31] = env->getMethodID(cls, "<init>", "(DDDLorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/IERSConventions;Z)V");
              mids$[mid_displacement_90801f07349d77e7] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TidalDisplacement::TidalDisplacement(jdouble a0, jdouble a1, jdouble a2, const ::org::orekit::utils::PVCoordinatesProvider & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4, const ::org::orekit::utils::IERSConventions & a5, jboolean a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_70c7b539bacfcf31, a0, a1, a2, a3.this$, a4.this$, a5.this$, a6)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TidalDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_90801f07349d77e7], a0.this$, a1.this$, a2.this$));
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
        namespace displacement {
          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args);

          static PyMethodDef t_TidalDisplacement__methods_[] = {
            DECLARE_METHOD(t_TidalDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TidalDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TidalDisplacement)[] = {
            { Py_tp_methods, t_TidalDisplacement__methods_ },
            { Py_tp_init, (void *) t_TidalDisplacement_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TidalDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TidalDisplacement, t_TidalDisplacement, TidalDisplacement);

          void t_TidalDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(TidalDisplacement), &PY_TYPE_DEF(TidalDisplacement), module, "TidalDisplacement", 0);
          }

          void t_TidalDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "class_", make_descriptor(TidalDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "wrapfn_", make_descriptor(t_TidalDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TidalDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TidalDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TidalDisplacement::initializeClass, 1)))
              return NULL;
            return t_TidalDisplacement::wrap_Object(TidalDisplacement(((t_TidalDisplacement *) arg)->object.this$));
          }
          static PyObject *t_TidalDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TidalDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TidalDisplacement_init_(t_TidalDisplacement *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            ::org::orekit::utils::PVCoordinatesProvider a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::utils::IERSConventions a5((jobject) NULL);
            PyTypeObject **p5;
            jboolean a6;
            TidalDisplacement object((jobject) NULL);

            if (!parseArgs(args, "DDDkkKZ", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
            {
              INT_CALL(object = TidalDisplacement(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TidalDisplacement_displacement(t_TidalDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance$Direction::class$ = NULL;
          jmethodID *SemiVariance$Direction::mids$ = NULL;
          bool SemiVariance$Direction::live$ = false;
          SemiVariance$Direction *SemiVariance$Direction::DOWNSIDE = NULL;
          SemiVariance$Direction *SemiVariance$Direction::UPSIDE = NULL;

          jclass SemiVariance$Direction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance$Direction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_5f993594462aa01a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_values_c61940432089f395] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance$Direction SemiVariance$Direction::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SemiVariance$Direction(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5f993594462aa01a], a0.this$));
          }

          JArray< SemiVariance$Direction > SemiVariance$Direction::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SemiVariance$Direction >(env->callStaticObjectMethod(cls, mids$[mid_values_c61940432089f395]));
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args);
          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type);
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data);
          static PyGetSetDef t_SemiVariance$Direction__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance$Direction, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance$Direction__methods_[] = {
            DECLARE_METHOD(t_SemiVariance$Direction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, of_, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance$Direction, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance$Direction)[] = {
            { Py_tp_methods, t_SemiVariance$Direction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SemiVariance$Direction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance$Direction)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SemiVariance$Direction, t_SemiVariance$Direction, SemiVariance$Direction);
          PyObject *t_SemiVariance$Direction::wrap_Object(const SemiVariance$Direction& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SemiVariance$Direction::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SemiVariance$Direction::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance$Direction), &PY_TYPE_DEF(SemiVariance$Direction), module, "SemiVariance$Direction", 0);
          }

          void t_SemiVariance$Direction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "class_", make_descriptor(SemiVariance$Direction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "wrapfn_", make_descriptor(t_SemiVariance$Direction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance$Direction::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "DOWNSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::DOWNSIDE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "UPSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::UPSIDE)));
          }

          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance$Direction::initializeClass, 1)))
              return NULL;
            return t_SemiVariance$Direction::wrap_Object(SemiVariance$Direction(((t_SemiVariance$Direction *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance$Direction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SemiVariance$Direction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::valueOf(a0));
              return t_SemiVariance$Direction::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type)
          {
            JArray< SemiVariance$Direction > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::values());
            return JArray<jobject>(result.this$).wrap(t_SemiVariance$Direction::wrap_jobject);
          }
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/TDOA.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TDOAIonosphericDelayModifier::class$ = NULL;
          jmethodID *TDOAIonosphericDelayModifier::mids$ = NULL;
          bool TDOAIonosphericDelayModifier::live$ = false;

          jclass TDOAIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TDOAIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70ec985998eac326] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_a5896dbcbe782924] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TDOAIonosphericDelayModifier::TDOAIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_70ec985998eac326, a0.this$, a1)) {}

          ::java::util::List TDOAIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void TDOAIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_a5896dbcbe782924], a0.this$);
          }

          void TDOAIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self);
          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TDOAIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TDOAIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TDOAIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TDOAIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TDOAIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TDOAIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TDOAIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TDOAIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TDOAIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TDOAIonosphericDelayModifier, t_TDOAIonosphericDelayModifier, TDOAIonosphericDelayModifier);

          void t_TDOAIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TDOAIonosphericDelayModifier), &PY_TYPE_DEF(TDOAIonosphericDelayModifier), module, "TDOAIonosphericDelayModifier", 0);
          }

          void t_TDOAIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "class_", make_descriptor(TDOAIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TDOAIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TDOAIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TDOAIonosphericDelayModifier::wrap_Object(TDOAIonosphericDelayModifier(((t_TDOAIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TDOAIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TDOAIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TDOAIonosphericDelayModifier_init_(t_TDOAIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TDOAIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TDOAIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TDOAIonosphericDelayModifier_getParametersDrivers(t_TDOAIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TDOAIonosphericDelayModifier_modify(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_TDOAIonosphericDelayModifier_modifyWithoutDerivatives(t_TDOAIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TDOAIonosphericDelayModifier_get__parametersDrivers(t_TDOAIonosphericDelayModifier *self, void *data)
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
#include "org/hipparchus/linear/QRDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *QRDecomposition::class$ = NULL;
      jmethodID *QRDecomposition::mids$ = NULL;
      bool QRDecomposition::live$ = false;

      jclass QRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/QRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_27ff5cf8ba76b4fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getH_7116bbecdd8ceb21] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQ_7116bbecdd8ceb21] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getQT_7116bbecdd8ceb21] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getR_7116bbecdd8ceb21] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_73ddb95911119e87] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_decompose_d660c7a97bf55272] = env->getMethodID(cls, "decompose", "([[D)V");
          mids$[mid_performHouseholderReflection_d2ec2a370d571745] = env->getMethodID(cls, "performHouseholderReflection", "(I[[D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      QRDecomposition::QRDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27ff5cf8ba76b4fe, a0.this$, a1)) {}

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQ_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getQT_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix QRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getR_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::DecompositionSolver QRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_73ddb95911119e87]));
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
      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self);
      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data);
      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data);
      static PyGetSetDef t_QRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_QRDecomposition, h),
        DECLARE_GET_FIELD(t_QRDecomposition, q),
        DECLARE_GET_FIELD(t_QRDecomposition, qT),
        DECLARE_GET_FIELD(t_QRDecomposition, r),
        DECLARE_GET_FIELD(t_QRDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_QRDecomposition__methods_[] = {
        DECLARE_METHOD(t_QRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_QRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_QRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(QRDecomposition)[] = {
        { Py_tp_methods, t_QRDecomposition__methods_ },
        { Py_tp_init, (void *) t_QRDecomposition_init_ },
        { Py_tp_getset, t_QRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(QRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(QRDecomposition, t_QRDecomposition, QRDecomposition);

      void t_QRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(QRDecomposition), &PY_TYPE_DEF(QRDecomposition), module, "QRDecomposition", 0);
      }

      void t_QRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "class_", make_descriptor(QRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "wrapfn_", make_descriptor(t_QRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(QRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_QRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, QRDecomposition::initializeClass, 1)))
          return NULL;
        return t_QRDecomposition::wrap_Object(QRDecomposition(((t_QRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_QRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, QRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_QRDecomposition_init_(t_QRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = QRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            QRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = QRDecomposition(a0, a1));
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

      static PyObject *t_QRDecomposition_getH(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQ(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getQT(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getR(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_getSolver(t_QRDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_QRDecomposition_get__h(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__q(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__qT(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__r(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_QRDecomposition_get__solver(t_QRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MathUtils.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/MathUtils$SumAndResidual.h"
#include "org/hipparchus/exception/Localizable.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/util/MathUtils$FieldSumAndResidual.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MathUtils::class$ = NULL;
      jmethodID *MathUtils::mids$ = NULL;
      bool MathUtils::live$ = false;
      jdouble MathUtils::PI_SQUARED = (jdouble) 0;
      jdouble MathUtils::SEMI_PI = (jdouble) 0;
      jdouble MathUtils::TWO_PI = (jdouble) 0;

      jclass MathUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MathUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_checkDimension_8dbc1129a3c2557a] = env->getStaticMethodID(cls, "checkDimension", "(II)V");
          mids$[mid_checkFinite_ebc26dcaf4761286] = env->getStaticMethodID(cls, "checkFinite", "([D)V");
          mids$[mid_checkFinite_77e0f9a1f260e2e5] = env->getStaticMethodID(cls, "checkFinite", "(D)V");
          mids$[mid_checkNotNull_7ca0d9438822cb0b] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;)V");
          mids$[mid_checkNotNull_4a08d1632f6975bc] = env->getStaticMethodID(cls, "checkNotNull", "(Ljava/lang/Object;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_checkRangeInclusive_d0d6094fbd7015c5] = env->getStaticMethodID(cls, "checkRangeInclusive", "(DDD)V");
          mids$[mid_checkRangeInclusive_24462a11c42ba10b] = env->getStaticMethodID(cls, "checkRangeInclusive", "(JJJ)V");
          mids$[mid_copySign_5826ac196c20fe4e] = env->getStaticMethodID(cls, "copySign", "(BB)B");
          mids$[mid_copySign_d9790ac9eecfe931] = env->getStaticMethodID(cls, "copySign", "(II)I");
          mids$[mid_copySign_8f974216cbe53aea] = env->getStaticMethodID(cls, "copySign", "(JJ)J");
          mids$[mid_copySign_30405b752b89221e] = env->getStaticMethodID(cls, "copySign", "(SS)S");
          mids$[mid_equals_a836bdf37f582c99] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_hash_37221385ab42f822] = env->getStaticMethodID(cls, "hash", "([D)I");
          mids$[mid_hash_12ebab281ee35c98] = env->getStaticMethodID(cls, "hash", "(D)I");
          mids$[mid_max_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "max", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_min_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "min", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_normalizeAngle_824133ce4aec3505] = env->getStaticMethodID(cls, "normalizeAngle", "(DD)D");
          mids$[mid_normalizeAngle_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "normalizeAngle", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_reduce_c564d6ace53a5934] = env->getStaticMethodID(cls, "reduce", "(DDD)D");
          mids$[mid_twoSum_066d66182fb7a918] = env->getStaticMethodID(cls, "twoSum", "(DD)Lorg/hipparchus/util/MathUtils$SumAndResidual;");
          mids$[mid_twoSum_3d4618c17ea63fb5] = env->getStaticMethodID(cls, "twoSum", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/util/MathUtils$FieldSumAndResidual;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          PI_SQUARED = env->getStaticDoubleField(cls, "PI_SQUARED");
          SEMI_PI = env->getStaticDoubleField(cls, "SEMI_PI");
          TWO_PI = env->getStaticDoubleField(cls, "TWO_PI");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void MathUtils::checkDimension(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkDimension_8dbc1129a3c2557a], a0, a1);
      }

      void MathUtils::checkFinite(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_ebc26dcaf4761286], a0.this$);
      }

      void MathUtils::checkFinite(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkFinite_77e0f9a1f260e2e5], a0);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_7ca0d9438822cb0b], a0.this$);
      }

      void MathUtils::checkNotNull(const ::java::lang::Object & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkNotNull_4a08d1632f6975bc], a0.this$, a1.this$, a2.this$);
      }

      void MathUtils::checkRangeInclusive(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_d0d6094fbd7015c5], a0, a1, a2);
      }

      void MathUtils::checkRangeInclusive(jlong a0, jlong a1, jlong a2)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkRangeInclusive_24462a11c42ba10b], a0, a1, a2);
      }

      jbyte MathUtils::copySign(jbyte a0, jbyte a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticByteMethod(cls, mids$[mid_copySign_5826ac196c20fe4e], a0, a1);
      }

      jint MathUtils::copySign(jint a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_copySign_d9790ac9eecfe931], a0, a1);
      }

      jlong MathUtils::copySign(jlong a0, jlong a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticLongMethod(cls, mids$[mid_copySign_8f974216cbe53aea], a0, a1);
      }

      jshort MathUtils::copySign(jshort a0, jshort a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticShortMethod(cls, mids$[mid_copySign_30405b752b89221e], a0, a1);
      }

      jboolean MathUtils::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_a836bdf37f582c99], a0, a1);
      }

      jint MathUtils::hash(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_37221385ab42f822], a0.this$);
      }

      jint MathUtils::hash(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_hash_12ebab281ee35c98], a0);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::max$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_max_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::min$(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_min_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble MathUtils::normalizeAngle(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_normalizeAngle_824133ce4aec3505], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement MathUtils::normalizeAngle(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_normalizeAngle_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      jdouble MathUtils::reduce(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_reduce_c564d6ace53a5934], a0, a1, a2);
      }

      ::org::hipparchus::util::MathUtils$SumAndResidual MathUtils::twoSum(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$SumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_066d66182fb7a918], a0, a1));
      }

      ::org::hipparchus::util::MathUtils$FieldSumAndResidual MathUtils::twoSum(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::util::MathUtils$FieldSumAndResidual(env->callStaticObjectMethod(cls, mids$[mid_twoSum_3d4618c17ea63fb5], a0.this$, a1.this$));
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
      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args);
      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_MathUtils__methods_[] = {
        DECLARE_METHOD(t_MathUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkDimension, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkFinite, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkNotNull, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, checkRangeInclusive, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, copySign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, hash, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, max, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, min, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, normalizeAngle, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, reduce, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_MathUtils, twoSum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathUtils)[] = {
        { Py_tp_methods, t_MathUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MathUtils, t_MathUtils, MathUtils);

      void t_MathUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(MathUtils), &PY_TYPE_DEF(MathUtils), module, "MathUtils", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "FieldSumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$FieldSumAndResidual)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SumAndResidual", make_descriptor(&PY_TYPE_DEF(MathUtils$SumAndResidual)));
      }

      void t_MathUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "class_", make_descriptor(MathUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "wrapfn_", make_descriptor(t_MathUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(MathUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "PI_SQUARED", make_descriptor(MathUtils::PI_SQUARED));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "SEMI_PI", make_descriptor(MathUtils::SEMI_PI));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathUtils), "TWO_PI", make_descriptor(MathUtils::TWO_PI));
      }

      static PyObject *t_MathUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathUtils::initializeClass, 1)))
          return NULL;
        return t_MathUtils::wrap_Object(MathUtils(((t_MathUtils *) arg)->object.this$));
      }
      static PyObject *t_MathUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MathUtils_checkDimension(PyTypeObject *type, PyObject *args)
      {
        jint a0;
        jint a1;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(::org::hipparchus::util::MathUtils::checkDimension(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkDimension", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkFinite(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkFinite(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkFinite", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkNotNull(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::Object a0((jobject) NULL);

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 3:
          {
            ::java::lang::Object a0((jobject) NULL);
            ::org::hipparchus::exception::Localizable a1((jobject) NULL);
            JArray< ::java::lang::Object > a2((jobject) NULL);

            if (!parseArgs(args, "ok[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkNotNull(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkNotNull", args);
        return NULL;
      }

      static PyObject *t_MathUtils_checkRangeInclusive(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong a2;

            if (!parseArgs(args, "JJJ", &a0, &a1, &a2))
            {
              OBJ_CALL(::org::hipparchus::util::MathUtils::checkRangeInclusive(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError(type, "checkRangeInclusive", args);
        return NULL;
      }

      static PyObject *t_MathUtils_copySign(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jbyte a0;
            jbyte a1;
            jbyte result;

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jint a0;
            jint a1;
            jint result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jlong a0;
            jlong a1;
            jlong result;

            if (!parseArgs(args, "JJ", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
          {
            jshort a0;
            jshort a1;
            jshort result;

            if (!parseArgs(args, "SS", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::copySign(a0, a1));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "copySign", args);
        return NULL;
      }

      static PyObject *t_MathUtils_equals(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jboolean result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::equals(a0, a1));
          Py_RETURN_BOOL(result);
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_MathUtils_hash(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jint result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::hash(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "hash", args);
        return NULL;
      }

      static PyObject *t_MathUtils_max(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::max$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "max", args);
        return NULL;
      }

      static PyObject *t_MathUtils_min(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::min$(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "min", args);
        return NULL;
      }

      static PyObject *t_MathUtils_normalizeAngle(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::normalizeAngle(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "normalizeAngle", args);
        return NULL;
      }

      static PyObject *t_MathUtils_reduce(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::MathUtils::reduce(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "reduce", args);
        return NULL;
      }

      static PyObject *t_MathUtils_twoSum(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::util::MathUtils$SumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$SumAndResidual::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::FieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::FieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::util::MathUtils$FieldSumAndResidual result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::util::MathUtils::twoSum(a0, a1));
              return ::org::hipparchus::util::t_MathUtils$FieldSumAndResidual::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "twoSum", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *Preconditioner::class$ = NULL;
            jmethodID *Preconditioner::mids$ = NULL;
            bool Preconditioner::live$ = false;

            jclass Preconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_precondition_0f29b7d9f77b462e] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > Preconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_0f29b7d9f77b462e], a0.this$, a1.this$));
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
          namespace gradient {
            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args);

            static PyMethodDef t_Preconditioner__methods_[] = {
              DECLARE_METHOD(t_Preconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Preconditioner)[] = {
              { Py_tp_methods, t_Preconditioner__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Preconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(Preconditioner, t_Preconditioner, Preconditioner);

            void t_Preconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(Preconditioner), &PY_TYPE_DEF(Preconditioner), module, "Preconditioner", 0);
            }

            void t_Preconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "class_", make_descriptor(Preconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "wrapfn_", make_descriptor(t_Preconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Preconditioner::initializeClass, 1)))
                return NULL;
              return t_Preconditioner::wrap_Object(Preconditioner(((t_Preconditioner *) arg)->object.this$));
            }
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Preconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
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
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *VariationalEquation$MismatchedEquations::class$ = NULL;
      jmethodID *VariationalEquation$MismatchedEquations::mids$ = NULL;
      bool VariationalEquation$MismatchedEquations::live$ = false;

      jclass VariationalEquation$MismatchedEquations::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/VariationalEquation$MismatchedEquations");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation$MismatchedEquations::VariationalEquation$MismatchedEquations() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      static PyObject *t_VariationalEquation$MismatchedEquations_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VariationalEquation$MismatchedEquations_instance_(PyTypeObject *type, PyObject *arg);
      static int t_VariationalEquation$MismatchedEquations_init_(t_VariationalEquation$MismatchedEquations *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_VariationalEquation$MismatchedEquations__methods_[] = {
        DECLARE_METHOD(t_VariationalEquation$MismatchedEquations, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation$MismatchedEquations, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VariationalEquation$MismatchedEquations)[] = {
        { Py_tp_methods, t_VariationalEquation$MismatchedEquations__methods_ },
        { Py_tp_init, (void *) t_VariationalEquation$MismatchedEquations_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VariationalEquation$MismatchedEquations)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathIllegalArgumentException),
        NULL
      };

      DEFINE_TYPE(VariationalEquation$MismatchedEquations, t_VariationalEquation$MismatchedEquations, VariationalEquation$MismatchedEquations);

      void t_VariationalEquation$MismatchedEquations::install(PyObject *module)
      {
        installType(&PY_TYPE(VariationalEquation$MismatchedEquations), &PY_TYPE_DEF(VariationalEquation$MismatchedEquations), module, "VariationalEquation$MismatchedEquations", 0);
      }

      void t_VariationalEquation$MismatchedEquations::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "class_", make_descriptor(VariationalEquation$MismatchedEquations::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "wrapfn_", make_descriptor(t_VariationalEquation$MismatchedEquations::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation$MismatchedEquations), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VariationalEquation$MismatchedEquations_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VariationalEquation$MismatchedEquations::initializeClass, 1)))
          return NULL;
        return t_VariationalEquation$MismatchedEquations::wrap_Object(VariationalEquation$MismatchedEquations(((t_VariationalEquation$MismatchedEquations *) arg)->object.this$));
      }
      static PyObject *t_VariationalEquation$MismatchedEquations_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VariationalEquation$MismatchedEquations::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_VariationalEquation$MismatchedEquations_init_(t_VariationalEquation$MismatchedEquations *self, PyObject *args, PyObject *kwds)
      {
        VariationalEquation$MismatchedEquations object((jobject) NULL);

        INT_CALL(object = VariationalEquation$MismatchedEquations());
        self->object = object;

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonUnnormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonUnnormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonUnnormalizedSphericalHarmonicsProvider::live$ = false;

          jclass PythonUnnormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonUnnormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_456d9a2f64d6b28d] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b3b39360f3c8a6ac] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_d776fe8e473ad4bf] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonUnnormalizedSphericalHarmonicsProvider::PythonUnnormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonUnnormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonUnnormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonUnnormalizedSphericalHarmonicsProvider_init_(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_finalize(t_PythonUnnormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_get__self(t_PythonUnnormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonUnnormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonUnnormalizedSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonUnnormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonUnnormalizedSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonUnnormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonUnnormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonUnnormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonUnnormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonUnnormalizedSphericalHarmonicsProvider, t_PythonUnnormalizedSphericalHarmonicsProvider, PythonUnnormalizedSphericalHarmonicsProvider);

          void t_PythonUnnormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonUnnormalizedSphericalHarmonicsProvider), module, "PythonUnnormalizedSphericalHarmonicsProvider", 1);
          }

          void t_PythonUnnormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "class_", make_descriptor(PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonUnnormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnnormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonUnnormalizedSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonUnnormalizedSphericalHarmonicsProvider::wrap_Object(PythonUnnormalizedSphericalHarmonicsProvider(((t_PythonUnnormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonUnnormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonUnnormalizedSphericalHarmonicsProvider_init_(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonUnnormalizedSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonUnnormalizedSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_finalize(t_PythonUnnormalizedSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonUnnormalizedSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static jobject JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
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

          static void JNICALL t_PythonUnnormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonUnnormalizedSphericalHarmonicsProvider::mids$[PythonUnnormalizedSphericalHarmonicsProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonUnnormalizedSphericalHarmonicsProvider_get__self(t_PythonUnnormalizedSphericalHarmonicsProvider *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CovarianceMethod::class$ = NULL;
            jmethodID *CovarianceMethod::mids$ = NULL;
            bool CovarianceMethod::live$ = false;
            CovarianceMethod *CovarianceMethod::CALCULATED = NULL;
            CovarianceMethod *CovarianceMethod::DEFAULT = NULL;

            jclass CovarianceMethod::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CovarianceMethod");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_01565eec9f9126ef] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_values_9fdd287c2f6779fe] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CALCULATED = new CovarianceMethod(env->getStaticObjectField(cls, "CALCULATED", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                DEFAULT = new CovarianceMethod(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CovarianceMethod CovarianceMethod::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CovarianceMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_01565eec9f9126ef], a0.this$));
            }

            JArray< CovarianceMethod > CovarianceMethod::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CovarianceMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_9fdd287c2f6779fe]));
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
          namespace cdm {
            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args);
            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CovarianceMethod_values(PyTypeObject *type);
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data);
            static PyGetSetDef t_CovarianceMethod__fields_[] = {
              DECLARE_GET_FIELD(t_CovarianceMethod, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CovarianceMethod__methods_[] = {
              DECLARE_METHOD(t_CovarianceMethod, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, of_, METH_VARARGS),
              DECLARE_METHOD(t_CovarianceMethod, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CovarianceMethod)[] = {
              { Py_tp_methods, t_CovarianceMethod__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CovarianceMethod__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CovarianceMethod)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CovarianceMethod, t_CovarianceMethod, CovarianceMethod);
            PyObject *t_CovarianceMethod::wrap_Object(const CovarianceMethod& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CovarianceMethod::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CovarianceMethod::install(PyObject *module)
            {
              installType(&PY_TYPE(CovarianceMethod), &PY_TYPE_DEF(CovarianceMethod), module, "CovarianceMethod", 0);
            }

            void t_CovarianceMethod::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "class_", make_descriptor(CovarianceMethod::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "wrapfn_", make_descriptor(t_CovarianceMethod::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "boxfn_", make_descriptor(boxObject));
              env->getClass(CovarianceMethod::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "CALCULATED", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::CALCULATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "DEFAULT", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::DEFAULT)));
            }

            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CovarianceMethod::initializeClass, 1)))
                return NULL;
              return t_CovarianceMethod::wrap_Object(CovarianceMethod(((t_CovarianceMethod *) arg)->object.this$));
            }
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CovarianceMethod::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CovarianceMethod result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::valueOf(a0));
                return t_CovarianceMethod::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CovarianceMethod_values(PyTypeObject *type)
            {
              JArray< CovarianceMethod > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::values());
              return JArray<jobject>(result.this$).wrap(t_CovarianceMethod::wrap_jobject);
            }
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList$DelegatingDriver::class$ = NULL;
      jmethodID *ParameterDriversList$DelegatingDriver::mids$ = NULL;
      bool ParameterDriversList$DelegatingDriver::live$ = false;

      jclass ParameterDriversList$DelegatingDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList$DelegatingDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getRawDrivers_a6156df500549a58] = env->getMethodID(cls, "getRawDrivers", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List ParameterDriversList$DelegatingDriver::getRawDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getRawDrivers_a6156df500549a58]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self);
      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data);
      static PyGetSetDef t_ParameterDriversList$DelegatingDriver__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList$DelegatingDriver, rawDrivers),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList$DelegatingDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList$DelegatingDriver, getRawDrivers, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList$DelegatingDriver)[] = {
        { Py_tp_methods, t_ParameterDriversList$DelegatingDriver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ParameterDriversList$DelegatingDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList$DelegatingDriver)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriver),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList$DelegatingDriver, t_ParameterDriversList$DelegatingDriver, ParameterDriversList$DelegatingDriver);

      void t_ParameterDriversList$DelegatingDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList$DelegatingDriver), &PY_TYPE_DEF(ParameterDriversList$DelegatingDriver), module, "ParameterDriversList$DelegatingDriver", 0);
      }

      void t_ParameterDriversList$DelegatingDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "class_", make_descriptor(ParameterDriversList$DelegatingDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "wrapfn_", make_descriptor(t_ParameterDriversList$DelegatingDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList$DelegatingDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList$DelegatingDriver::wrap_Object(ParameterDriversList$DelegatingDriver(((t_ParameterDriversList$DelegatingDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList$DelegatingDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList$DelegatingDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_getRawDrivers(t_ParameterDriversList$DelegatingDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
      }

      static PyObject *t_ParameterDriversList$DelegatingDriver_get__rawDrivers(t_ParameterDriversList$DelegatingDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getRawDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_5d593e1d60308d01] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics NormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_5d593e1d60308d01], a0.this$));
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
          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider, t_NormalizedSphericalHarmonicsProvider, NormalizedSphericalHarmonicsProvider);

          void t_NormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider), module, "NormalizedSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "NormalizedSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)));
          }

          void t_NormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider::wrap_Object(NormalizedSphericalHarmonicsProvider(((t_NormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider_onDate(t_NormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/attitudes/Inertia.h"
#include "org/orekit/attitudes/InertiaAxis.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *Inertia::class$ = NULL;
      jmethodID *Inertia::mids$ = NULL;
      bool Inertia::live$ = false;

      jclass Inertia::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/Inertia");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getInertiaAxis1_c91d001b4ca9ba20] = env->getMethodID(cls, "getInertiaAxis1", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis2_c91d001b4ca9ba20] = env->getMethodID(cls, "getInertiaAxis2", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_getInertiaAxis3_c91d001b4ca9ba20] = env->getMethodID(cls, "getInertiaAxis3", "()Lorg/orekit/attitudes/InertiaAxis;");
          mids$[mid_momentum_afd63a09f6d01e4c] = env->getMethodID(cls, "momentum", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_swap12_3602ee5088404a9b] = env->getMethodID(cls, "swap12", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap13_3602ee5088404a9b] = env->getMethodID(cls, "swap13", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_swap23_3602ee5088404a9b] = env->getMethodID(cls, "swap23", "()Lorg/orekit/attitudes/Inertia;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis1() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis1_c91d001b4ca9ba20]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis2() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis2_c91d001b4ca9ba20]));
      }

      ::org::orekit::attitudes::InertiaAxis Inertia::getInertiaAxis3() const
      {
        return ::org::orekit::attitudes::InertiaAxis(env->callObjectMethod(this$, mids$[mid_getInertiaAxis3_c91d001b4ca9ba20]));
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D Inertia::momentum(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_momentum_afd63a09f6d01e4c], a0.this$));
      }

      Inertia Inertia::swap12() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap12_3602ee5088404a9b]));
      }

      Inertia Inertia::swap13() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap13_3602ee5088404a9b]));
      }

      Inertia Inertia::swap23() const
      {
        return Inertia(env->callObjectMethod(this$, mids$[mid_swap23_3602ee5088404a9b]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Inertia_getInertiaAxis1(t_Inertia *self);
      static PyObject *t_Inertia_getInertiaAxis2(t_Inertia *self);
      static PyObject *t_Inertia_getInertiaAxis3(t_Inertia *self);
      static PyObject *t_Inertia_momentum(t_Inertia *self, PyObject *arg);
      static PyObject *t_Inertia_swap12(t_Inertia *self);
      static PyObject *t_Inertia_swap13(t_Inertia *self);
      static PyObject *t_Inertia_swap23(t_Inertia *self);
      static PyObject *t_Inertia_get__inertiaAxis1(t_Inertia *self, void *data);
      static PyObject *t_Inertia_get__inertiaAxis2(t_Inertia *self, void *data);
      static PyObject *t_Inertia_get__inertiaAxis3(t_Inertia *self, void *data);
      static PyGetSetDef t_Inertia__fields_[] = {
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis1),
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis2),
        DECLARE_GET_FIELD(t_Inertia, inertiaAxis3),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Inertia__methods_[] = {
        DECLARE_METHOD(t_Inertia, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Inertia, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis1, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis2, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, getInertiaAxis3, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, momentum, METH_O),
        DECLARE_METHOD(t_Inertia, swap12, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, swap13, METH_NOARGS),
        DECLARE_METHOD(t_Inertia, swap23, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Inertia)[] = {
        { Py_tp_methods, t_Inertia__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Inertia__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Inertia)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Inertia, t_Inertia, Inertia);

      void t_Inertia::install(PyObject *module)
      {
        installType(&PY_TYPE(Inertia), &PY_TYPE_DEF(Inertia), module, "Inertia", 0);
      }

      void t_Inertia::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "class_", make_descriptor(Inertia::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "wrapfn_", make_descriptor(t_Inertia::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Inertia), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Inertia_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Inertia::initializeClass, 1)))
          return NULL;
        return t_Inertia::wrap_Object(Inertia(((t_Inertia *) arg)->object.this$));
      }
      static PyObject *t_Inertia_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Inertia::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Inertia_getInertiaAxis1(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_getInertiaAxis2(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_getInertiaAxis3(t_Inertia *self)
      {
        ::org::orekit::attitudes::InertiaAxis result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(result);
      }

      static PyObject *t_Inertia_momentum(t_Inertia *self, PyObject *arg)
      {
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.momentum(a0));
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "momentum", arg);
        return NULL;
      }

      static PyObject *t_Inertia_swap12(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap12());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_swap13(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap13());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_swap23(t_Inertia *self)
      {
        Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.swap23());
        return t_Inertia::wrap_Object(result);
      }

      static PyObject *t_Inertia_get__inertiaAxis1(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis1());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }

      static PyObject *t_Inertia_get__inertiaAxis2(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis2());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }

      static PyObject *t_Inertia_get__inertiaAxis3(t_Inertia *self, void *data)
      {
        ::org::orekit::attitudes::InertiaAxis value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertiaAxis3());
        return ::org::orekit::attitudes::t_InertiaAxis::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/PyhonData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *PyhonData::class$ = NULL;
          jmethodID *PyhonData::mids$ = NULL;
          bool PyhonData::live$ = false;

          jclass PyhonData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/PyhonData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PyhonData::PyhonData() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PyhonData::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PyhonData::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PyhonData::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        namespace section {
          static PyObject *t_PyhonData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PyhonData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PyhonData_init_(t_PyhonData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PyhonData_finalize(t_PyhonData *self);
          static PyObject *t_PyhonData_pythonExtension(t_PyhonData *self, PyObject *args);
          static void JNICALL t_PyhonData_pythonDecRef0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PyhonData_validate1(JNIEnv *jenv, jobject jobj, jdouble a0);
          static PyObject *t_PyhonData_get__self(t_PyhonData *self, void *data);
          static PyGetSetDef t_PyhonData__fields_[] = {
            DECLARE_GET_FIELD(t_PyhonData, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PyhonData__methods_[] = {
            DECLARE_METHOD(t_PyhonData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PyhonData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PyhonData, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PyhonData, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PyhonData)[] = {
            { Py_tp_methods, t_PyhonData__methods_ },
            { Py_tp_init, (void *) t_PyhonData_init_ },
            { Py_tp_getset, t_PyhonData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PyhonData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PyhonData, t_PyhonData, PyhonData);

          void t_PyhonData::install(PyObject *module)
          {
            installType(&PY_TYPE(PyhonData), &PY_TYPE_DEF(PyhonData), module, "PyhonData", 1);
          }

          void t_PyhonData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "class_", make_descriptor(PyhonData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "wrapfn_", make_descriptor(t_PyhonData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PyhonData), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PyhonData::initializeClass);
            JNINativeMethod methods[] = {
              { "pythonDecRef", "()V", (void *) t_PyhonData_pythonDecRef0 },
              { "validate", "(D)V", (void *) t_PyhonData_validate1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PyhonData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PyhonData::initializeClass, 1)))
              return NULL;
            return t_PyhonData::wrap_Object(PyhonData(((t_PyhonData *) arg)->object.this$));
          }
          static PyObject *t_PyhonData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PyhonData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PyhonData_init_(t_PyhonData *self, PyObject *args, PyObject *kwds)
          {
            PyhonData object((jobject) NULL);

            INT_CALL(object = PyhonData());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PyhonData_finalize(t_PyhonData *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PyhonData_pythonExtension(t_PyhonData *self, PyObject *args)
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

          static void JNICALL t_PyhonData_pythonDecRef0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PyhonData_validate1(JNIEnv *jenv, jobject jobj, jdouble a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PyhonData::mids$[PyhonData::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "d", (double) a0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PyhonData_get__self(t_PyhonData *self, void *data)
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
#include "org/hipparchus/analysis/function/Cosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cosh::class$ = NULL;
        jmethodID *Cosh::mids$ = NULL;
        bool Cosh::live$ = false;

        jclass Cosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cosh::Cosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Cosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
      namespace function {
        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args);

        static PyMethodDef t_Cosh__methods_[] = {
          DECLARE_METHOD(t_Cosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cosh)[] = {
          { Py_tp_methods, t_Cosh__methods_ },
          { Py_tp_init, (void *) t_Cosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cosh, t_Cosh, Cosh);

        void t_Cosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Cosh), &PY_TYPE_DEF(Cosh), module, "Cosh", 0);
        }

        void t_Cosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "class_", make_descriptor(Cosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "wrapfn_", make_descriptor(t_Cosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cosh::initializeClass, 1)))
            return NULL;
          return t_Cosh::wrap_Object(Cosh(((t_Cosh *) arg)->object.this$));
        }
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds)
        {
          Cosh object((jobject) NULL);

          INT_CALL(object = Cosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/UnivariateProcessNoise.h"
#include "org/orekit/frames/LOFType.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnivariateProcessNoise::class$ = NULL;
        jmethodID *UnivariateProcessNoise::mids$ = NULL;
        bool UnivariateProcessNoise::live$ = false;

        jclass UnivariateProcessNoise::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnivariateProcessNoise");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9342b48e67c409e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_init$_c0e3efb252f067d5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/frames/LOFType;Lorg/orekit/orbits/PositionAngleType;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;[Lorg/hipparchus/analysis/UnivariateFunction;)V");
            mids$[mid_getLofCartesianOrbitalParametersEvolution_8218f2a321676331] = env->getMethodID(cls, "getLofCartesianOrbitalParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getLofType_c33b33ba21325973] = env->getMethodID(cls, "getLofType", "()Lorg/orekit/frames/LOFType;");
            mids$[mid_getMeasurementsParametersEvolution_8218f2a321676331] = env->getMethodID(cls, "getMeasurementsParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getProcessNoiseMatrix_dc7483997a2e9c4d] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPropagationParametersEvolution_8218f2a321676331] = env->getMethodID(cls, "getPropagationParametersEvolution", "()[Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_c9342b48e67c409e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        UnivariateProcessNoise::UnivariateProcessNoise(const ::org::hipparchus::linear::RealMatrix & a0, const ::org::orekit::frames::LOFType & a1, const ::org::orekit::orbits::PositionAngleType & a2, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a3, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a4, const JArray< ::org::hipparchus::analysis::UnivariateFunction > & a5) : ::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider(env->newObject(initializeClass, &mids$, mid_init$_c0e3efb252f067d5, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getLofCartesianOrbitalParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getLofCartesianOrbitalParametersEvolution_8218f2a321676331]));
        }

        ::org::orekit::frames::LOFType UnivariateProcessNoise::getLofType() const
        {
          return ::org::orekit::frames::LOFType(env->callObjectMethod(this$, mids$[mid_getLofType_c33b33ba21325973]));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getMeasurementsParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getMeasurementsParametersEvolution_8218f2a321676331]));
        }

        ::org::orekit::orbits::PositionAngleType UnivariateProcessNoise::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
        }

        ::org::hipparchus::linear::RealMatrix UnivariateProcessNoise::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_dc7483997a2e9c4d], a0.this$, a1.this$));
        }

        JArray< ::org::hipparchus::analysis::UnivariateFunction > UnivariateProcessNoise::getPropagationParametersEvolution() const
        {
          return JArray< ::org::hipparchus::analysis::UnivariateFunction >(env->callObjectMethod(this$, mids$[mid_getPropagationParametersEvolution_8218f2a321676331]));
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
      namespace sequential {
        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args);
        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self);
        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data);
        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data);
        static PyGetSetDef t_UnivariateProcessNoise__fields_[] = {
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofCartesianOrbitalParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, lofType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, measurementsParametersEvolution),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, positionAngleType),
          DECLARE_GET_FIELD(t_UnivariateProcessNoise, propagationParametersEvolution),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnivariateProcessNoise__methods_[] = {
          DECLARE_METHOD(t_UnivariateProcessNoise, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofCartesianOrbitalParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getLofType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getMeasurementsParametersEvolution, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getProcessNoiseMatrix, METH_VARARGS),
          DECLARE_METHOD(t_UnivariateProcessNoise, getPropagationParametersEvolution, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateProcessNoise)[] = {
          { Py_tp_methods, t_UnivariateProcessNoise__methods_ },
          { Py_tp_init, (void *) t_UnivariateProcessNoise_init_ },
          { Py_tp_getset, t_UnivariateProcessNoise__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateProcessNoise)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractCovarianceMatrixProvider),
          NULL
        };

        DEFINE_TYPE(UnivariateProcessNoise, t_UnivariateProcessNoise, UnivariateProcessNoise);

        void t_UnivariateProcessNoise::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateProcessNoise), &PY_TYPE_DEF(UnivariateProcessNoise), module, "UnivariateProcessNoise", 0);
        }

        void t_UnivariateProcessNoise::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "class_", make_descriptor(UnivariateProcessNoise::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "wrapfn_", make_descriptor(t_UnivariateProcessNoise::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateProcessNoise), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateProcessNoise_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateProcessNoise::initializeClass, 1)))
            return NULL;
          return t_UnivariateProcessNoise::wrap_Object(UnivariateProcessNoise(((t_UnivariateProcessNoise *) arg)->object.this$));
        }
        static PyObject *t_UnivariateProcessNoise_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateProcessNoise::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariateProcessNoise_init_(t_UnivariateProcessNoise *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              ::org::orekit::frames::LOFType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a3((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a4((jobject) NULL);
              JArray< ::org::hipparchus::analysis::UnivariateFunction > a5((jobject) NULL);
              UnivariateProcessNoise object((jobject) NULL);

              if (!parseArgs(args, "kKK[k[k[k", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::frames::LOFType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &p1, ::org::orekit::frames::t_LOFType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4, &a5))
              {
                INT_CALL(object = UnivariateProcessNoise(a0, a1, a2, a3, a4, a5));
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

        static PyObject *t_UnivariateProcessNoise_getLofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getLofType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::frames::LOFType result((jobject) NULL);
          OBJ_CALL(result = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getMeasurementsParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_getPositionAngleType(t_UnivariateProcessNoise *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_UnivariateProcessNoise_getProcessNoiseMatrix(t_UnivariateProcessNoise *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(UnivariateProcessNoise), (PyObject *) self, "getProcessNoiseMatrix", args, 2);
        }

        static PyObject *t_UnivariateProcessNoise_getPropagationParametersEvolution(t_UnivariateProcessNoise *self)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofCartesianOrbitalParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofCartesianOrbitalParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__lofType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::frames::LOFType value((jobject) NULL);
          OBJ_CALL(value = self->object.getLofType());
          return ::org::orekit::frames::t_LOFType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__measurementsParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementsParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }

        static PyObject *t_UnivariateProcessNoise_get__positionAngleType(t_UnivariateProcessNoise *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_UnivariateProcessNoise_get__propagationParametersEvolution(t_UnivariateProcessNoise *self, void *data)
        {
          JArray< ::org::hipparchus::analysis::UnivariateFunction > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersEvolution());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::analysis::t_UnivariateFunction::wrap_jobject);
        }
      }
    }
  }
}
