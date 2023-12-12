#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WindUpFactory.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/WindUp.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WindUpFactory::class$ = NULL;
          jmethodID *WindUpFactory::mids$ = NULL;
          bool WindUpFactory::live$ = false;

          jclass WindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_59cd264d3e277df8] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Ljava/lang/String;)Lorg/orekit/estimation/measurements/gnss/WindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          WindUpFactory::WindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::orekit::estimation::measurements::gnss::WindUp WindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::java::lang::String & a3) const
          {
            return ::org::orekit::estimation::measurements::gnss::WindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_59cd264d3e277df8], a0.this$, a1, a2.this$, a3.this$));
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
        namespace gnss {
          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args);

          static PyMethodDef t_WindUpFactory__methods_[] = {
            DECLARE_METHOD(t_WindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WindUpFactory)[] = {
            { Py_tp_methods, t_WindUpFactory__methods_ },
            { Py_tp_init, (void *) t_WindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(WindUpFactory, t_WindUpFactory, WindUpFactory);

          void t_WindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(WindUpFactory), &PY_TYPE_DEF(WindUpFactory), module, "WindUpFactory", 0);
          }

          void t_WindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "class_", make_descriptor(WindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "wrapfn_", make_descriptor(t_WindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WindUpFactory::initializeClass, 1)))
              return NULL;
            return t_WindUpFactory::wrap_Object(WindUpFactory(((t_WindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_WindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_WindUpFactory_init_(t_WindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            WindUpFactory object((jobject) NULL);

            INT_CALL(object = WindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_WindUpFactory_getWindUp(t_WindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::java::lang::String a3((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::WindUp result((jobject) NULL);

            if (!parseArgs(args, "KIks", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::gnss::t_WindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine$FieldOccultationAngles::class$ = NULL;
      jmethodID *OccultationEngine$FieldOccultationAngles::mids$ = NULL;
      bool OccultationEngine$FieldOccultationAngles::live$ = false;

      jclass OccultationEngine$FieldOccultationAngles::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine$FieldOccultationAngles");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLimbRadius_613c8f46c659f636] = env->getMethodID(cls, "getLimbRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOccultedApparentRadius_613c8f46c659f636] = env->getMethodID(cls, "getOccultedApparentRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSeparation_613c8f46c659f636] = env->getMethodID(cls, "getSeparation", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getLimbRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLimbRadius_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getOccultedApparentRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOccultedApparentRadius_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getSeparation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSeparation_613c8f46c659f636]));
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
      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyGetSetDef t_OccultationEngine$FieldOccultationAngles__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, limbRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, occultedApparentRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, separation),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine$FieldOccultationAngles__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, of_, METH_VARARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getLimbRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getOccultedApparentRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getSeparation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine$FieldOccultationAngles)[] = {
        { Py_tp_methods, t_OccultationEngine$FieldOccultationAngles__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OccultationEngine$FieldOccultationAngles__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine$FieldOccultationAngles)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine$FieldOccultationAngles, t_OccultationEngine$FieldOccultationAngles, OccultationEngine$FieldOccultationAngles);
      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_Object(const OccultationEngine$FieldOccultationAngles& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OccultationEngine$FieldOccultationAngles::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine$FieldOccultationAngles), &PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles), module, "OccultationEngine$FieldOccultationAngles", 0);
      }

      void t_OccultationEngine$FieldOccultationAngles::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "class_", make_descriptor(OccultationEngine$FieldOccultationAngles::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "wrapfn_", make_descriptor(t_OccultationEngine$FieldOccultationAngles::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine$FieldOccultationAngles::wrap_Object(OccultationEngine$FieldOccultationAngles(((t_OccultationEngine$FieldOccultationAngles *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLimbRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOccultedApparentRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLimbRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOccultedApparentRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/AbstractParameterizable.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/Parameterizable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *AbstractParameterizable::class$ = NULL;
      jmethodID *AbstractParameterizable::mids$ = NULL;
      bool AbstractParameterizable::live$ = false;

      jclass AbstractParameterizable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/AbstractParameterizable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_complainIfNotSupported_f5ffdf29129ef90a] = env->getMethodID(cls, "complainIfNotSupported", "(Ljava/lang/String;)V");
          mids$[mid_getParametersNames_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_fd2162b8a05a22fe] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractParameterizable::complainIfNotSupported(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_complainIfNotSupported_f5ffdf29129ef90a], a0.this$);
      }

      ::java::util::List AbstractParameterizable::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_0d9551367f7ecdef]));
      }

      jboolean AbstractParameterizable::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_fd2162b8a05a22fe], a0.this$);
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
      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self);
      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg);
      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data);
      static PyGetSetDef t_AbstractParameterizable__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractParameterizable, parametersNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractParameterizable__methods_[] = {
        DECLARE_METHOD(t_AbstractParameterizable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractParameterizable, complainIfNotSupported, METH_O),
        DECLARE_METHOD(t_AbstractParameterizable, getParametersNames, METH_NOARGS),
        DECLARE_METHOD(t_AbstractParameterizable, isSupported, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractParameterizable)[] = {
        { Py_tp_methods, t_AbstractParameterizable__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractParameterizable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractParameterizable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractParameterizable, t_AbstractParameterizable, AbstractParameterizable);

      void t_AbstractParameterizable::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractParameterizable), &PY_TYPE_DEF(AbstractParameterizable), module, "AbstractParameterizable", 0);
      }

      void t_AbstractParameterizable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "class_", make_descriptor(AbstractParameterizable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "wrapfn_", make_descriptor(t_AbstractParameterizable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractParameterizable), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractParameterizable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractParameterizable::initializeClass, 1)))
          return NULL;
        return t_AbstractParameterizable::wrap_Object(AbstractParameterizable(((t_AbstractParameterizable *) arg)->object.this$));
      }
      static PyObject *t_AbstractParameterizable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractParameterizable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractParameterizable_complainIfNotSupported(t_AbstractParameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.complainIfNotSupported(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "complainIfNotSupported", arg);
        return NULL;
      }

      static PyObject *t_AbstractParameterizable_getParametersNames(t_AbstractParameterizable *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_AbstractParameterizable_isSupported(t_AbstractParameterizable *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.isSupported(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "isSupported", arg);
        return NULL;
      }

      static PyObject *t_AbstractParameterizable_get__parametersNames(t_AbstractParameterizable *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getParametersNames());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ButcherArrayProvider::class$ = NULL;
        jmethodID *ButcherArrayProvider::mids$ = NULL;
        bool ButcherArrayProvider::live$ = false;

        jclass ButcherArrayProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ButcherArrayProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getA_8cf5267aa13a77f3] = env->getMethodID(cls, "getA", "()[[D");
            mids$[mid_getB_a53a7513ecedada2] = env->getMethodID(cls, "getB", "()[D");
            mids$[mid_getC_a53a7513ecedada2] = env->getMethodID(cls, "getC", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< JArray< jdouble > > ButcherArrayProvider::getA() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getA_8cf5267aa13a77f3]));
        }

        JArray< jdouble > ButcherArrayProvider::getB() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getB_a53a7513ecedada2]));
        }

        JArray< jdouble > ButcherArrayProvider::getC() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getC_a53a7513ecedada2]));
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
        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self);
        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data);
        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data);
        static PyGetSetDef t_ButcherArrayProvider__fields_[] = {
          DECLARE_GET_FIELD(t_ButcherArrayProvider, a),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, b),
          DECLARE_GET_FIELD(t_ButcherArrayProvider, c),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ButcherArrayProvider__methods_[] = {
          DECLARE_METHOD(t_ButcherArrayProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ButcherArrayProvider, getA, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getB, METH_NOARGS),
          DECLARE_METHOD(t_ButcherArrayProvider, getC, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ButcherArrayProvider)[] = {
          { Py_tp_methods, t_ButcherArrayProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ButcherArrayProvider__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ButcherArrayProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ButcherArrayProvider, t_ButcherArrayProvider, ButcherArrayProvider);

        void t_ButcherArrayProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(ButcherArrayProvider), &PY_TYPE_DEF(ButcherArrayProvider), module, "ButcherArrayProvider", 0);
        }

        void t_ButcherArrayProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "class_", make_descriptor(ButcherArrayProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "wrapfn_", make_descriptor(t_ButcherArrayProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ButcherArrayProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ButcherArrayProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ButcherArrayProvider::initializeClass, 1)))
            return NULL;
          return t_ButcherArrayProvider::wrap_Object(ButcherArrayProvider(((t_ButcherArrayProvider *) arg)->object.this$));
        }
        static PyObject *t_ButcherArrayProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ButcherArrayProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ButcherArrayProvider_getA(t_ButcherArrayProvider *self)
        {
          JArray< JArray< jdouble > > result((jobject) NULL);
          OBJ_CALL(result = self->object.getA());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_getB(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getB());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_getC(t_ButcherArrayProvider *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getC());
          return result.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__a(t_ButcherArrayProvider *self, void *data)
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ButcherArrayProvider_get__b(t_ButcherArrayProvider *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return value.wrap();
        }

        static PyObject *t_ButcherArrayProvider_get__c(t_ButcherArrayProvider *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultiSatStepHandler::class$ = NULL;
        jmethodID *MultiSatStepHandler::mids$ = NULL;
        bool MultiSatStepHandler::live$ = false;

        jclass MultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_4ccaedadb068bdeb] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_4ccaedadb068bdeb] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_98fa7d48d3b7f88a] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_4ccaedadb068bdeb], a0.this$);
        }

        void MultiSatStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_4ccaedadb068bdeb], a0.this$);
        }

        void MultiSatStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_98fa7d48d3b7f88a], a0.this$, a1.this$);
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
      namespace sampling {
        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args);

        static PyMethodDef t_MultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_MultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, finish, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiSatStepHandler)[] = {
          { Py_tp_methods, t_MultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultiSatStepHandler, t_MultiSatStepHandler, MultiSatStepHandler);

        void t_MultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiSatStepHandler), &PY_TYPE_DEF(MultiSatStepHandler), module, "MultiSatStepHandler", 0);
        }

        void t_MultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "class_", make_descriptor(MultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "wrapfn_", make_descriptor(t_MultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_MultiSatStepHandler::wrap_Object(MultiSatStepHandler(((t_MultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
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
#include "org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *ObjectiveFunctionGradient::class$ = NULL;
          jmethodID *ObjectiveFunctionGradient::mids$ = NULL;
          bool ObjectiveFunctionGradient::live$ = false;

          jclass ObjectiveFunctionGradient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/ObjectiveFunctionGradient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_00344baa1c95ffab] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;)V");
              mids$[mid_getObjectiveFunctionGradient_88ca328d89915cf7] = env->getMethodID(cls, "getObjectiveFunctionGradient", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObjectiveFunctionGradient::ObjectiveFunctionGradient(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_00344baa1c95ffab, a0.this$)) {}

          ::org::hipparchus::analysis::MultivariateVectorFunction ObjectiveFunctionGradient::getObjectiveFunctionGradient() const
          {
            return ::org::hipparchus::analysis::MultivariateVectorFunction(env->callObjectMethod(this$, mids$[mid_getObjectiveFunctionGradient_88ca328d89915cf7]));
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
          static PyObject *t_ObjectiveFunctionGradient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObjectiveFunctionGradient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObjectiveFunctionGradient_init_(t_ObjectiveFunctionGradient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObjectiveFunctionGradient_getObjectiveFunctionGradient(t_ObjectiveFunctionGradient *self);
          static PyObject *t_ObjectiveFunctionGradient_get__objectiveFunctionGradient(t_ObjectiveFunctionGradient *self, void *data);
          static PyGetSetDef t_ObjectiveFunctionGradient__fields_[] = {
            DECLARE_GET_FIELD(t_ObjectiveFunctionGradient, objectiveFunctionGradient),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObjectiveFunctionGradient__methods_[] = {
            DECLARE_METHOD(t_ObjectiveFunctionGradient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunctionGradient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObjectiveFunctionGradient, getObjectiveFunctionGradient, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObjectiveFunctionGradient)[] = {
            { Py_tp_methods, t_ObjectiveFunctionGradient__methods_ },
            { Py_tp_init, (void *) t_ObjectiveFunctionGradient_init_ },
            { Py_tp_getset, t_ObjectiveFunctionGradient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObjectiveFunctionGradient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObjectiveFunctionGradient, t_ObjectiveFunctionGradient, ObjectiveFunctionGradient);

          void t_ObjectiveFunctionGradient::install(PyObject *module)
          {
            installType(&PY_TYPE(ObjectiveFunctionGradient), &PY_TYPE_DEF(ObjectiveFunctionGradient), module, "ObjectiveFunctionGradient", 0);
          }

          void t_ObjectiveFunctionGradient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "class_", make_descriptor(ObjectiveFunctionGradient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "wrapfn_", make_descriptor(t_ObjectiveFunctionGradient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObjectiveFunctionGradient), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObjectiveFunctionGradient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObjectiveFunctionGradient::initializeClass, 1)))
              return NULL;
            return t_ObjectiveFunctionGradient::wrap_Object(ObjectiveFunctionGradient(((t_ObjectiveFunctionGradient *) arg)->object.this$));
          }
          static PyObject *t_ObjectiveFunctionGradient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObjectiveFunctionGradient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObjectiveFunctionGradient_init_(t_ObjectiveFunctionGradient *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
            ObjectiveFunctionGradient object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0))
            {
              INT_CALL(object = ObjectiveFunctionGradient(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObjectiveFunctionGradient_getObjectiveFunctionGradient(t_ObjectiveFunctionGradient *self)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction result((jobject) NULL);
            OBJ_CALL(result = self->object.getObjectiveFunctionGradient());
            return ::org::hipparchus::analysis::t_MultivariateVectorFunction::wrap_Object(result);
          }

          static PyObject *t_ObjectiveFunctionGradient_get__objectiveFunctionGradient(t_ObjectiveFunctionGradient *self, void *data)
          {
            ::org::hipparchus::analysis::MultivariateVectorFunction value((jobject) NULL);
            OBJ_CALL(value = self->object.getObjectiveFunctionGradient());
            return ::org::hipparchus::analysis::t_MultivariateVectorFunction::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationConvention.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Rotation::class$ = NULL;
          jmethodID *Rotation::mids$ = NULL;
          bool Rotation::live$ = false;
          Rotation *Rotation::IDENTITY = NULL;

          jclass Rotation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Rotation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_be9548a8a583a03d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_ed1ea3c88bfc4c0e] = env->getMethodID(cls, "<init>", "([[DD)V");
              mids$[mid_init$_053676e45631ca1c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/RotationConvention;)V");
              mids$[mid_init$_2de057303d403e96] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_107e6f6bd1deddd4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;DDD)V");
              mids$[mid_init$_5a3f2614d84ea74f] = env->getMethodID(cls, "<init>", "(DDDDZ)V");
              mids$[mid_applyInverseTo_e81f5abfd2c7d09d] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyInverseTo_b48aa9aef740fa79] = env->getMethodID(cls, "applyInverseTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyInverseTo_ab4840ba016ef1da] = env->getMethodID(cls, "applyInverseTo", "([D[D)V");
              mids$[mid_applyTo_e81f5abfd2c7d09d] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_applyTo_b48aa9aef740fa79] = env->getMethodID(cls, "applyTo", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_applyTo_ab4840ba016ef1da] = env->getMethodID(cls, "applyTo", "([D[D)V");
              mids$[mid_compose_c32f9fe35e571dfa] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_composeInverse_c32f9fe35e571dfa] = env->getMethodID(cls, "composeInverse", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_distance_111ab3ebc4d0d9bb] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)D");
              mids$[mid_getAngle_557b8123390d8d0c] = env->getMethodID(cls, "getAngle", "()D");
              mids$[mid_getAngles_c40c4543275315f0] = env->getMethodID(cls, "getAngles", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)[D");
              mids$[mid_getAxis_096b5df9e235dcab] = env->getMethodID(cls, "getAxis", "(Lorg/hipparchus/geometry/euclidean/threed/RotationConvention;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getMatrix_8cf5267aa13a77f3] = env->getMethodID(cls, "getMatrix", "()[[D");
              mids$[mid_getQ0_557b8123390d8d0c] = env->getMethodID(cls, "getQ0", "()D");
              mids$[mid_getQ1_557b8123390d8d0c] = env->getMethodID(cls, "getQ1", "()D");
              mids$[mid_getQ2_557b8123390d8d0c] = env->getMethodID(cls, "getQ2", "()D");
              mids$[mid_getQ3_557b8123390d8d0c] = env->getMethodID(cls, "getQ3", "()D");
              mids$[mid_revert_1e0dc1a6788897b9] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IDENTITY = new Rotation(env->getStaticObjectField(cls, "IDENTITY", "Lorg/hipparchus/geometry/euclidean/threed/Rotation;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be9548a8a583a03d, a0.this$, a1.this$)) {}

          Rotation::Rotation(const JArray< JArray< jdouble > > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed1ea3c88bfc4c0e, a0.this$, a1)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_053676e45631ca1c, a0.this$, a1, a2.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2de057303d403e96, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          Rotation::Rotation(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_107e6f6bd1deddd4, a0.this$, a1.this$, a2, a3, a4)) {}

          Rotation::Rotation(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jboolean a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5a3f2614d84ea74f, a0, a1, a2, a3, a4)) {}

          Rotation Rotation::applyInverseTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyInverseTo_e81f5abfd2c7d09d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyInverseTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyInverseTo_b48aa9aef740fa79], a0.this$));
          }

          void Rotation::applyInverseTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyInverseTo_ab4840ba016ef1da], a0.this$, a1.this$);
          }

          Rotation Rotation::applyTo(const Rotation & a0) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_applyTo_e81f5abfd2c7d09d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::applyTo(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_applyTo_b48aa9aef740fa79], a0.this$));
          }

          void Rotation::applyTo(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_applyTo_ab4840ba016ef1da], a0.this$, a1.this$);
          }

          Rotation Rotation::compose(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_compose_c32f9fe35e571dfa], a0.this$, a1.this$));
          }

          Rotation Rotation::composeInverse(const Rotation & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_composeInverse_c32f9fe35e571dfa], a0.this$, a1.this$));
          }

          jdouble Rotation::distance(const Rotation & a0, const Rotation & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_111ab3ebc4d0d9bb], a0.this$, a1.this$);
          }

          jdouble Rotation::getAngle() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAngle_557b8123390d8d0c]);
          }

          JArray< jdouble > Rotation::getAngles(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0, const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a1) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAngles_c40c4543275315f0], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Rotation::getAxis(const ::org::hipparchus::geometry::euclidean::threed::RotationConvention & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxis_096b5df9e235dcab], a0.this$));
          }

          JArray< JArray< jdouble > > Rotation::getMatrix() const
          {
            return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getMatrix_8cf5267aa13a77f3]));
          }

          jdouble Rotation::getQ0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ0_557b8123390d8d0c]);
          }

          jdouble Rotation::getQ1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ1_557b8123390d8d0c]);
          }

          jdouble Rotation::getQ2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ2_557b8123390d8d0c]);
          }

          jdouble Rotation::getQ3() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ3_557b8123390d8d0c]);
          }

          Rotation Rotation::revert() const
          {
            return Rotation(env->callObjectMethod(this$, mids$[mid_revert_1e0dc1a6788897b9]));
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
          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args);
          static PyObject *t_Rotation_getAngle(t_Rotation *self);
          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args);
          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg);
          static PyObject *t_Rotation_getMatrix(t_Rotation *self);
          static PyObject *t_Rotation_getQ0(t_Rotation *self);
          static PyObject *t_Rotation_getQ1(t_Rotation *self);
          static PyObject *t_Rotation_getQ2(t_Rotation *self);
          static PyObject *t_Rotation_getQ3(t_Rotation *self);
          static PyObject *t_Rotation_revert(t_Rotation *self);
          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data);
          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data);
          static PyGetSetDef t_Rotation__fields_[] = {
            DECLARE_GET_FIELD(t_Rotation, angle),
            DECLARE_GET_FIELD(t_Rotation, matrix),
            DECLARE_GET_FIELD(t_Rotation, q0),
            DECLARE_GET_FIELD(t_Rotation, q1),
            DECLARE_GET_FIELD(t_Rotation, q2),
            DECLARE_GET_FIELD(t_Rotation, q3),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Rotation__methods_[] = {
            DECLARE_METHOD(t_Rotation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Rotation, applyInverseTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, applyTo, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, compose, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, composeInverse, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, distance, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Rotation, getAngle, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getAngles, METH_VARARGS),
            DECLARE_METHOD(t_Rotation, getAxis, METH_O),
            DECLARE_METHOD(t_Rotation, getMatrix, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ0, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ1, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ2, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, getQ3, METH_NOARGS),
            DECLARE_METHOD(t_Rotation, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Rotation)[] = {
            { Py_tp_methods, t_Rotation__methods_ },
            { Py_tp_init, (void *) t_Rotation_init_ },
            { Py_tp_getset, t_Rotation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Rotation)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Rotation, t_Rotation, Rotation);

          void t_Rotation::install(PyObject *module)
          {
            installType(&PY_TYPE(Rotation), &PY_TYPE_DEF(Rotation), module, "Rotation", 0);
          }

          void t_Rotation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "class_", make_descriptor(Rotation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "wrapfn_", make_descriptor(t_Rotation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "boxfn_", make_descriptor(boxObject));
            env->getClass(Rotation::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Rotation), "IDENTITY", make_descriptor(t_Rotation::wrap_Object(*Rotation::IDENTITY)));
          }

          static PyObject *t_Rotation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Rotation::initializeClass, 1)))
              return NULL;
            return t_Rotation::wrap_Object(Rotation(((t_Rotation *) arg)->object.this$));
          }
          static PyObject *t_Rotation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Rotation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Rotation_init_(t_Rotation *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                JArray< JArray< jdouble > > a0((jobject) NULL);
                jdouble a1;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "[[DD", &a0, &a1))
                {
                  INT_CALL(object = Rotation(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::RotationConvention a2((jobject) NULL);
                PyTypeObject **p2;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kDK", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
                {
                  INT_CALL(object = Rotation(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3));
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
                jdouble a2;
                jdouble a3;
                jdouble a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "KKDDD", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jboolean a4;
                Rotation object((jobject) NULL);

                if (!parseArgs(args, "DDDDZ", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = Rotation(a0, a1, a2, a3, a4));
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

          static PyObject *t_Rotation_applyInverseTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyInverseTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyInverseTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyInverseTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_applyTo(t_Rotation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Rotation a0((jobject) NULL);
                Rotation result((jobject) NULL);

                if (!parseArgs(args, "k", Rotation::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return t_Rotation::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.applyTo(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  OBJ_CALL(self->object.applyTo(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "applyTo", args);
            return NULL;
          }

          static PyObject *t_Rotation_compose(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.compose(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "compose", args);
            return NULL;
          }

          static PyObject *t_Rotation_composeInverse(t_Rotation *self, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            Rotation result((jobject) NULL);

            if (!parseArgs(args, "kK", Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.composeInverse(a0, a1));
              return t_Rotation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "composeInverse", args);
            return NULL;
          }

          static PyObject *t_Rotation_distance(PyTypeObject *type, PyObject *args)
          {
            Rotation a0((jobject) NULL);
            Rotation a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Rotation::initializeClass, Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Rotation::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAngle(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAngle());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getAngles(t_Rotation *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a1((jobject) NULL);
            PyTypeObject **p1;
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAngles(a0, a1));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "getAngles", args);
            return NULL;
          }

          static PyObject *t_Rotation_getAxis(t_Rotation *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::RotationConvention a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationConvention::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationConvention::parameters_))
            {
              OBJ_CALL(result = self->object.getAxis(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAxis", arg);
            return NULL;
          }

          static PyObject *t_Rotation_getMatrix(t_Rotation *self)
          {
            JArray< JArray< jdouble > > result((jobject) NULL);
            OBJ_CALL(result = self->object.getMatrix());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_getQ0(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ1(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ2(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_getQ3(t_Rotation *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ3());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Rotation_revert(t_Rotation *self)
          {
            Rotation result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Rotation::wrap_Object(result);
          }

          static PyObject *t_Rotation_get__angle(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAngle());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__matrix(t_Rotation *self, void *data)
          {
            JArray< JArray< jdouble > > value((jobject) NULL);
            OBJ_CALL(value = self->object.getMatrix());
            return JArray<jobject>(value.this$).wrap(NULL);
          }

          static PyObject *t_Rotation_get__q0(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q1(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q2(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Rotation_get__q3(t_Rotation *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ3());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/gauss/RuleFactory.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *RuleFactory::class$ = NULL;
          jmethodID *RuleFactory::mids$ = NULL;
          bool RuleFactory::live$ = false;

          jclass RuleFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/RuleFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRule_9a5adfb225849173] = env->getMethodID(cls, "getRule", "(I)Lorg/hipparchus/util/Pair;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::util::Pair RuleFactory::getRule(jint a0) const
          {
            return ::org::hipparchus::util::Pair(env->callObjectMethod(this$, mids$[mid_getRule_9a5adfb225849173], a0));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg);

          static PyMethodDef t_RuleFactory__methods_[] = {
            DECLARE_METHOD(t_RuleFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RuleFactory, getRule, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RuleFactory)[] = {
            { Py_tp_methods, t_RuleFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RuleFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RuleFactory, t_RuleFactory, RuleFactory);

          void t_RuleFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(RuleFactory), &PY_TYPE_DEF(RuleFactory), module, "RuleFactory", 0);
          }

          void t_RuleFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "class_", make_descriptor(RuleFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "wrapfn_", make_descriptor(t_RuleFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RuleFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RuleFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RuleFactory::initializeClass, 1)))
              return NULL;
            return t_RuleFactory::wrap_Object(RuleFactory(((t_RuleFactory *) arg)->object.this$));
          }
          static PyObject *t_RuleFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RuleFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RuleFactory_getRule(t_RuleFactory *self, PyObject *arg)
          {
            jint a0;
            ::org::hipparchus::util::Pair result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getRule(a0));
              return ::org::hipparchus::util::t_Pair::wrap_Object(result, ::java::lang::PY_TYPE(Object), ::java::lang::PY_TYPE(Object));
            }

            PyErr_SetArgsError((PyObject *) self, "getRule", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PythonOrbit.h"
#include "java/lang/Throwable.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonOrbit::class$ = NULL;
      jmethodID *PythonOrbit::mids$ = NULL;
      bool PythonOrbit::live$ = false;

      jclass PythonOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7c6479063e790949] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_511409a69796653b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_9dda16418cc4ed80] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_computeJacobianEccentricWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianMeanWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_8cf5267aa13a77f3] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getA_557b8123390d8d0c] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_557b8123390d8d0c] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_557b8123390d8d0c] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_557b8123390d8d0c] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_557b8123390d8d0c] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_557b8123390d8d0c] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_557b8123390d8d0c] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_557b8123390d8d0c] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_557b8123390d8d0c] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_557b8123390d8d0c] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_557b8123390d8d0c] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_557b8123390d8d0c] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_557b8123390d8d0c] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_557b8123390d8d0c] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_557b8123390d8d0c] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_557b8123390d8d0c] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_557b8123390d8d0c] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_2cea2a2cb3e02091] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_initPVCoordinates_daf15abc21907508] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_f88961cca75a2c0a] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_47d1046ffc445a6a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonOrbit::PythonOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_7c6479063e790949, a0.this$, a1.this$, a2)) {}

      PythonOrbit::PythonOrbit(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_511409a69796653b, a0.this$, a1.this$, a2)) {}

      void PythonOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonOrbit::pythonExtension(jlong a0) const
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
    namespace orbits {
      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self);
      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args);
      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data);
      static PyGetSetDef t_PythonOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonOrbit)[] = {
        { Py_tp_methods, t_PythonOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonOrbit_init_ },
        { Py_tp_getset, t_PythonOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(PythonOrbit, t_PythonOrbit, PythonOrbit);

      void t_PythonOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonOrbit), &PY_TYPE_DEF(PythonOrbit), module, "PythonOrbit", 1);
      }

      void t_PythonOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "class_", make_descriptor(PythonOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "wrapfn_", make_descriptor(t_PythonOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V", (void *) t_PythonOrbit_addKeplerContribution0 },
          { "computeJacobianEccentricWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianEccentricWrtCartesian1 },
          { "computeJacobianMeanWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianMeanWrtCartesian2 },
          { "computeJacobianTrueWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianTrueWrtCartesian3 },
          { "getA", "()D", (void *) t_PythonOrbit_getA4 },
          { "getADot", "()D", (void *) t_PythonOrbit_getADot5 },
          { "getE", "()D", (void *) t_PythonOrbit_getE6 },
          { "getEDot", "()D", (void *) t_PythonOrbit_getEDot7 },
          { "getEquinoctialEx", "()D", (void *) t_PythonOrbit_getEquinoctialEx8 },
          { "getEquinoctialExDot", "()D", (void *) t_PythonOrbit_getEquinoctialExDot9 },
          { "getEquinoctialEy", "()D", (void *) t_PythonOrbit_getEquinoctialEy10 },
          { "getEquinoctialEyDot", "()D", (void *) t_PythonOrbit_getEquinoctialEyDot11 },
          { "getHx", "()D", (void *) t_PythonOrbit_getHx12 },
          { "getHxDot", "()D", (void *) t_PythonOrbit_getHxDot13 },
          { "getHy", "()D", (void *) t_PythonOrbit_getHy14 },
          { "getHyDot", "()D", (void *) t_PythonOrbit_getHyDot15 },
          { "getI", "()D", (void *) t_PythonOrbit_getI16 },
          { "getIDot", "()D", (void *) t_PythonOrbit_getIDot17 },
          { "getLE", "()D", (void *) t_PythonOrbit_getLE18 },
          { "getLEDot", "()D", (void *) t_PythonOrbit_getLEDot19 },
          { "getLM", "()D", (void *) t_PythonOrbit_getLM20 },
          { "getLMDot", "()D", (void *) t_PythonOrbit_getLMDot21 },
          { "getLv", "()D", (void *) t_PythonOrbit_getLv22 },
          { "getLvDot", "()D", (void *) t_PythonOrbit_getLvDot23 },
          { "getType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonOrbit_getType24 },
          { "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonOrbit_initPVCoordinates25 },
          { "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonOrbit_initPosition26 },
          { "pythonDecRef", "()V", (void *) t_PythonOrbit_pythonDecRef27 },
          { "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;", (void *) t_PythonOrbit_shiftedBy28 },
        };
        env->registerNatives(cls, methods, 29);
      }

      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonOrbit::wrap_Object(PythonOrbit(((t_PythonOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args)
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

      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a0));
        PyObject *o2 = JArray<jdouble>(a2).wrap();
        PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "OdO", o0, (double) a1, o2);
        Py_DECREF(o0);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianEccentricWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianEccentricWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianMeanWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianMeanWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianTrueWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianTrueWrtCartesian", result);
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

      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getA", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getA", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getADot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getADot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialExDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialExDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHxDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHxDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getIDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getIDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLMDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLMDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLv", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLv", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLvDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLvDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
        {
          throwTypeError("getType", result);
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

      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPVCoordinates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("initPVCoordinates", result);
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

      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPosition", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("initPosition", result);
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

      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::Orbit value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
        {
          throwTypeError("shiftedBy", result);
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

      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data)
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
#include "org/orekit/attitudes/YawCompensation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *YawCompensation::class$ = NULL;
      jmethodID *YawCompensation::mids$ = NULL;
      bool YawCompensation::live$ = false;

      jclass YawCompensation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/YawCompensation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e52dd4acf08c7383] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/attitudes/GroundPointing;)V");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getBaseState_1306ac39e1d2de3f] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getBaseState_77e3383de01f3e48] = env->getMethodID(cls, "getBaseState", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getTargetPV_ee00ab612436435b] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_9e0119a6fef31431] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getUnderlyingAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getYawAngle_943fd94a25b2c056] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)D");
          mids$[mid_getYawAngle_b6c12af81c60eb89] = env->getMethodID(cls, "getYawAngle", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YawCompensation::YawCompensation(const ::org::orekit::frames::Frame & a0, const ::org::orekit::attitudes::GroundPointing & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_e52dd4acf08c7383, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::Attitude YawCompensation::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude YawCompensation::getBaseState(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getBaseState_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude YawCompensation::getBaseState(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getBaseState_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ee00ab612436435b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates YawCompensation::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_9e0119a6fef31431], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider YawCompensation::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_6df6b78ab9377151]));
      }

      jdouble YawCompensation::getYawAngle(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYawAngle_943fd94a25b2c056], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement YawCompensation::getYawAngle(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getYawAngle_b6c12af81c60eb89], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self);
      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args);
      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data);
      static PyGetSetDef t_YawCompensation__fields_[] = {
        DECLARE_GET_FIELD(t_YawCompensation, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YawCompensation__methods_[] = {
        DECLARE_METHOD(t_YawCompensation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YawCompensation, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getBaseState, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getTargetPV, METH_VARARGS),
        DECLARE_METHOD(t_YawCompensation, getUnderlyingAttitudeProvider, METH_NOARGS),
        DECLARE_METHOD(t_YawCompensation, getYawAngle, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YawCompensation)[] = {
        { Py_tp_methods, t_YawCompensation__methods_ },
        { Py_tp_init, (void *) t_YawCompensation_init_ },
        { Py_tp_getset, t_YawCompensation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YawCompensation)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(YawCompensation, t_YawCompensation, YawCompensation);

      void t_YawCompensation::install(PyObject *module)
      {
        installType(&PY_TYPE(YawCompensation), &PY_TYPE_DEF(YawCompensation), module, "YawCompensation", 0);
      }

      void t_YawCompensation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "class_", make_descriptor(YawCompensation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "wrapfn_", make_descriptor(t_YawCompensation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YawCompensation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YawCompensation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YawCompensation::initializeClass, 1)))
          return NULL;
        return t_YawCompensation::wrap_Object(YawCompensation(((t_YawCompensation *) arg)->object.this$));
      }
      static PyObject *t_YawCompensation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YawCompensation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YawCompensation_init_(t_YawCompensation *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::GroundPointing a1((jobject) NULL);
        YawCompensation object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::attitudes::GroundPointing::initializeClass, &a0, &a1))
        {
          INT_CALL(object = YawCompensation(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_YawCompensation_getAttitude(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(YawCompensation), (PyObject *) self, "getAttitude", args, 2);
      }

      static PyObject *t_YawCompensation_getBaseState(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getBaseState(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getBaseState", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getTargetPV(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_getUnderlyingAttitudeProvider(t_YawCompensation *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_YawCompensation_getYawAngle(t_YawCompensation *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getYawAngle(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getYawAngle", args);
        return NULL;
      }

      static PyObject *t_YawCompensation_get__underlyingAttitudeProvider(t_YawCompensation *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateFunctionMappingAdapter::class$ = NULL;
          jmethodID *MultivariateFunctionMappingAdapter::mids$ = NULL;
          bool MultivariateFunctionMappingAdapter::live$ = false;

          jclass MultivariateFunctionMappingAdapter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionMappingAdapter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6d4646014958a318] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[D)V");
              mids$[mid_boundedToUnbounded_1db7c087750eaffe] = env->getMethodID(cls, "boundedToUnbounded", "([D)[D");
              mids$[mid_unboundedToBounded_1db7c087750eaffe] = env->getMethodID(cls, "unboundedToBounded", "([D)[D");
              mids$[mid_value_86c4a0582e0747ce] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionMappingAdapter::MultivariateFunctionMappingAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6d4646014958a318, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > MultivariateFunctionMappingAdapter::boundedToUnbounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_boundedToUnbounded_1db7c087750eaffe], a0.this$));
          }

          JArray< jdouble > MultivariateFunctionMappingAdapter::unboundedToBounded(const JArray< jdouble > & a0) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_unboundedToBounded_1db7c087750eaffe], a0.this$));
          }

          jdouble MultivariateFunctionMappingAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_86c4a0582e0747ce], a0.this$);
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
          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);
          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg);

          static PyMethodDef t_MultivariateFunctionMappingAdapter__methods_[] = {
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, boundedToUnbounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, unboundedToBounded, METH_O),
            DECLARE_METHOD(t_MultivariateFunctionMappingAdapter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateFunctionMappingAdapter)[] = {
            { Py_tp_methods, t_MultivariateFunctionMappingAdapter__methods_ },
            { Py_tp_init, (void *) t_MultivariateFunctionMappingAdapter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateFunctionMappingAdapter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultivariateFunctionMappingAdapter, t_MultivariateFunctionMappingAdapter, MultivariateFunctionMappingAdapter);

          void t_MultivariateFunctionMappingAdapter::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateFunctionMappingAdapter), &PY_TYPE_DEF(MultivariateFunctionMappingAdapter), module, "MultivariateFunctionMappingAdapter", 0);
          }

          void t_MultivariateFunctionMappingAdapter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "class_", make_descriptor(MultivariateFunctionMappingAdapter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "wrapfn_", make_descriptor(t_MultivariateFunctionMappingAdapter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionMappingAdapter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 1)))
              return NULL;
            return t_MultivariateFunctionMappingAdapter::wrap_Object(MultivariateFunctionMappingAdapter(((t_MultivariateFunctionMappingAdapter *) arg)->object.this$));
          }
          static PyObject *t_MultivariateFunctionMappingAdapter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateFunctionMappingAdapter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultivariateFunctionMappingAdapter_init_(t_MultivariateFunctionMappingAdapter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            MultivariateFunctionMappingAdapter object((jobject) NULL);

            if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MultivariateFunctionMappingAdapter(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_boundedToUnbounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.boundedToUnbounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "boundedToUnbounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_unboundedToBounded(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.unboundedToBounded(a0));
              return result.wrap();
            }

            PyErr_SetArgsError((PyObject *) self, "unboundedToBounded", arg);
            return NULL;
          }

          static PyObject *t_MultivariateFunctionMappingAdapter_value(t_MultivariateFunctionMappingAdapter *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "value", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/GaussianRandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *GaussianRandomGenerator::class$ = NULL;
      jmethodID *GaussianRandomGenerator::mids$ = NULL;
      bool GaussianRandomGenerator::live$ = false;

      jclass GaussianRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/GaussianRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_19e7f6e95a4dc08e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_557b8123390d8d0c] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianRandomGenerator::GaussianRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_19e7f6e95a4dc08e, a0.this$)) {}

      jdouble GaussianRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_557b8123390d8d0c]);
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
      static PyObject *t_GaussianRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GaussianRandomGenerator_init_(t_GaussianRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GaussianRandomGenerator_nextNormalizedDouble(t_GaussianRandomGenerator *self);

      static PyMethodDef t_GaussianRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_GaussianRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianRandomGenerator)[] = {
        { Py_tp_methods, t_GaussianRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_GaussianRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GaussianRandomGenerator, t_GaussianRandomGenerator, GaussianRandomGenerator);

      void t_GaussianRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianRandomGenerator), &PY_TYPE_DEF(GaussianRandomGenerator), module, "GaussianRandomGenerator", 0);
      }

      void t_GaussianRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "class_", make_descriptor(GaussianRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "wrapfn_", make_descriptor(t_GaussianRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_GaussianRandomGenerator::wrap_Object(GaussianRandomGenerator(((t_GaussianRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_GaussianRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GaussianRandomGenerator_init_(t_GaussianRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        GaussianRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = GaussianRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GaussianRandomGenerator_nextNormalizedDouble(t_GaussianRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/BigFraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *BigFraction$ConvergenceTest::class$ = NULL;
      jmethodID *BigFraction$ConvergenceTest::mids$ = NULL;
      bool BigFraction$ConvergenceTest::live$ = false;

      jclass BigFraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/BigFraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_dffb0d0c2376e85c] = env->getMethodID(cls, "test", "(JJ)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigFraction$ConvergenceTest::test(jlong a0, jlong a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_dffb0d0c2376e85c], a0, a1);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace fraction {
      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_BigFraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigFraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigFraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_BigFraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigFraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigFraction$ConvergenceTest, t_BigFraction$ConvergenceTest, BigFraction$ConvergenceTest);

      void t_BigFraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(BigFraction$ConvergenceTest), &PY_TYPE_DEF(BigFraction$ConvergenceTest), module, "BigFraction$ConvergenceTest", 0);
      }

      void t_BigFraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "class_", make_descriptor(BigFraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "wrapfn_", make_descriptor(t_BigFraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigFraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigFraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_BigFraction$ConvergenceTest::wrap_Object(BigFraction$ConvergenceTest(((t_BigFraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_BigFraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigFraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigFraction$ConvergenceTest_test(t_BigFraction$ConvergenceTest *self, PyObject *args)
      {
        jlong a0;
        jlong a1;
        jboolean result;

        if (!parseArgs(args, "JJ", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldDecompositionSolver::class$ = NULL;
      jmethodID *FieldDecompositionSolver::mids$ = NULL;
      bool FieldDecompositionSolver::live$ = false;

      jclass FieldDecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldDecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_412668abc8d889e9] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_1d6b27621d7bea96] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowDimension_412668abc8d889e9] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_89b302893bdbe1f1] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_60dc3401cb1a0936] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_solve_a7c6926a425759ad] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint FieldDecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_412668abc8d889e9]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_1d6b27621d7bea96]));
      }

      jint FieldDecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_412668abc8d889e9]);
      }

      jboolean FieldDecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_89b302893bdbe1f1]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_solve_60dc3401cb1a0936], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_solve_a7c6926a425759ad], a0.this$));
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
      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data);
      static PyGetSetDef t_FieldDecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, rowDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_FieldDecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDecompositionSolver)[] = {
        { Py_tp_methods, t_FieldDecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldDecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDecompositionSolver, t_FieldDecompositionSolver, FieldDecompositionSolver);
      PyObject *t_FieldDecompositionSolver::wrap_Object(const FieldDecompositionSolver& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDecompositionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDecompositionSolver), &PY_TYPE_DEF(FieldDecompositionSolver), module, "FieldDecompositionSolver", 0);
      }

      void t_FieldDecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "class_", make_descriptor(FieldDecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "wrapfn_", make_descriptor(t_FieldDecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_FieldDecompositionSolver::wrap_Object(FieldDecompositionSolver(((t_FieldDecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/GammaDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GammaDistribution::class$ = NULL;
        jmethodID *GammaDistribution::mids$ = NULL;
        bool GammaDistribution::live$ = false;

        jclass GammaDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GammaDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_557b8123390d8d0c] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_7e960cd6eee376d8] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        GammaDistribution::GammaDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble GammaDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble GammaDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble GammaDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble GammaDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble GammaDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        jdouble GammaDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_557b8123390d8d0c]);
        }

        jdouble GammaDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble GammaDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jboolean GammaDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble GammaDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_7e960cd6eee376d8], a0);
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
        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self);
        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args);
        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data);
        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data);
        static PyGetSetDef t_GammaDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GammaDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GammaDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GammaDistribution, scale),
          DECLARE_GET_FIELD(t_GammaDistribution, shape),
          DECLARE_GET_FIELD(t_GammaDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GammaDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GammaDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GammaDistribution__methods_[] = {
          DECLARE_METHOD(t_GammaDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GammaDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GammaDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GammaDistribution)[] = {
          { Py_tp_methods, t_GammaDistribution__methods_ },
          { Py_tp_init, (void *) t_GammaDistribution_init_ },
          { Py_tp_getset, t_GammaDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GammaDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GammaDistribution, t_GammaDistribution, GammaDistribution);

        void t_GammaDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GammaDistribution), &PY_TYPE_DEF(GammaDistribution), module, "GammaDistribution", 0);
        }

        void t_GammaDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "class_", make_descriptor(GammaDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "wrapfn_", make_descriptor(t_GammaDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GammaDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GammaDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GammaDistribution::initializeClass, 1)))
            return NULL;
          return t_GammaDistribution::wrap_Object(GammaDistribution(((t_GammaDistribution *) arg)->object.this$));
        }
        static PyObject *t_GammaDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GammaDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GammaDistribution_init_(t_GammaDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = GammaDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              GammaDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaDistribution(a0, a1, a2));
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

        static PyObject *t_GammaDistribution_cumulativeProbability(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GammaDistribution_density(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalMean(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GammaDistribution_getNumericalVariance(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GammaDistribution_getScale(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getShape(t_GammaDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GammaDistribution_getSupportLowerBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GammaDistribution_getSupportUpperBound(t_GammaDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GammaDistribution_isSupportConnected(t_GammaDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GammaDistribution_logDensity(t_GammaDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GammaDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_GammaDistribution_get__numericalMean(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__numericalVariance(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__scale(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__shape(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportConnected(t_GammaDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GammaDistribution_get__supportLowerBound(t_GammaDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GammaDistribution_get__supportUpperBound(t_GammaDistribution *self, void *data)
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
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "java/util/List.h"
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigation::class$ = NULL;
          jmethodID *RinexNavigation::mids$ = NULL;
          bool RinexNavigation::live$ = false;

          jclass RinexNavigation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addBDGIMMessage_17edee189478da4a] = env->getMethodID(cls, "addBDGIMMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereBDGIMMessage;)V");
              mids$[mid_addBeidouCivilianNavigationMessage_51d66a128545ab32] = env->getMethodID(cls, "addBeidouCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage;)V");
              mids$[mid_addBeidouLegacyNavigationMessage_b3ed48b5bc32689f] = env->getMethodID(cls, "addBeidouLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
              mids$[mid_addEarthOrientationParameter_564a583497363346] = env->getMethodID(cls, "addEarthOrientationParameter", "(Lorg/orekit/files/rinex/navigation/EarthOrientationParameterMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_c20e2b5181601e79] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_32ebc1a815392aa5] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
              mids$[mid_addGalileoNavigationMessage_91f1ae10feea1e6d] = env->getMethodID(cls, "addGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
              mids$[mid_addGlonassNavigationMessage_2ccd3101dfe293f5] = env->getMethodID(cls, "addGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
              mids$[mid_addIRNSSNavigationMessage_3c046d1961be1d76] = env->getMethodID(cls, "addIRNSSNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage;)V");
              mids$[mid_addKlobucharMessage_1cd22f0da01d5ade] = env->getMethodID(cls, "addKlobucharMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereKlobucharMessage;)V");
              mids$[mid_addNequickGMessage_7bf843147ff865a6] = env->getMethodID(cls, "addNequickGMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereNequickGMessage;)V");
              mids$[mid_addQZSSCivilianNavigationMessage_54e5819ce49f4f51] = env->getMethodID(cls, "addQZSSCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage;)V");
              mids$[mid_addQZSSLegacyNavigationMessage_0219a485357a5d22] = env->getMethodID(cls, "addQZSSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
              mids$[mid_addSBASNavigationMessage_ae80c234e2f5a759] = env->getMethodID(cls, "addSBASNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/SBASNavigationMessage;)V");
              mids$[mid_addSystemTimeOffset_761b1cc460d40e17] = env->getMethodID(cls, "addSystemTimeOffset", "(Lorg/orekit/files/rinex/navigation/SystemTimeOffsetMessage;)V");
              mids$[mid_getBDGIMMessages_0d9551367f7ecdef] = env->getMethodID(cls, "getBDGIMMessages", "()Ljava/util/List;");
              mids$[mid_getBeidouCivilianNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouCivilianNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getBeidouLegacyNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouLegacyNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getEarthOrientationParameters_0d9551367f7ecdef] = env->getMethodID(cls, "getEarthOrientationParameters", "()Ljava/util/List;");
              mids$[mid_getGPSCivilianNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSCivilianNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGPSLegacyNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSLegacyNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGalileoNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getGalileoNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGalileoNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getGalileoNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGlonassNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getGlonassNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGlonassNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getGlonassNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getIRNSSNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getIRNSSNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getIRNSSNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getIRNSSNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getKlobucharAlpha_a53a7513ecedada2] = env->getMethodID(cls, "getKlobucharAlpha", "()[D");
              mids$[mid_getKlobucharBeta_a53a7513ecedada2] = env->getMethodID(cls, "getKlobucharBeta", "()[D");
              mids$[mid_getKlobucharMessages_0d9551367f7ecdef] = env->getMethodID(cls, "getKlobucharMessages", "()Ljava/util/List;");
              mids$[mid_getNeQuickAlpha_a53a7513ecedada2] = env->getMethodID(cls, "getNeQuickAlpha", "()[D");
              mids$[mid_getNequickGMessages_0d9551367f7ecdef] = env->getMethodID(cls, "getNequickGMessages", "()Ljava/util/List;");
              mids$[mid_getQZSSCivilianNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSCivilianNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getQZSSLegacyNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSLegacyNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSBASNavigationMessages_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSBASNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getSBASNavigationMessages_112f9b169ddc4fbe] = env->getMethodID(cls, "getSBASNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSystemTimeOffsets_0d9551367f7ecdef] = env->getMethodID(cls, "getSystemTimeOffsets", "()Ljava/util/List;");
              mids$[mid_setKlobucharAlpha_cc18240f4a737f14] = env->getMethodID(cls, "setKlobucharAlpha", "([D)V");
              mids$[mid_setKlobucharBeta_cc18240f4a737f14] = env->getMethodID(cls, "setKlobucharBeta", "([D)V");
              mids$[mid_setNeQuickAlpha_cc18240f4a737f14] = env->getMethodID(cls, "setNeQuickAlpha", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigation::RinexNavigation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void RinexNavigation::addBDGIMMessage(const ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBDGIMMessage_17edee189478da4a], a0.this$);
          }

          void RinexNavigation::addBeidouCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouCivilianNavigationMessage_51d66a128545ab32], a0.this$);
          }

          void RinexNavigation::addBeidouLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouLegacyNavigationMessage_b3ed48b5bc32689f], a0.this$);
          }

          void RinexNavigation::addEarthOrientationParameter(const ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addEarthOrientationParameter_564a583497363346], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_c20e2b5181601e79], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_32ebc1a815392aa5], a0.this$);
          }

          void RinexNavigation::addGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGalileoNavigationMessage_91f1ae10feea1e6d], a0.this$);
          }

          void RinexNavigation::addGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassNavigationMessage_2ccd3101dfe293f5], a0.this$);
          }

          void RinexNavigation::addIRNSSNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addIRNSSNavigationMessage_3c046d1961be1d76], a0.this$);
          }

          void RinexNavigation::addKlobucharMessage(const ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addKlobucharMessage_1cd22f0da01d5ade], a0.this$);
          }

          void RinexNavigation::addNequickGMessage(const ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addNequickGMessage_7bf843147ff865a6], a0.this$);
          }

          void RinexNavigation::addQZSSCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSCivilianNavigationMessage_54e5819ce49f4f51], a0.this$);
          }

          void RinexNavigation::addQZSSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSLegacyNavigationMessage_0219a485357a5d22], a0.this$);
          }

          void RinexNavigation::addSBASNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSBASNavigationMessage_ae80c234e2f5a759], a0.this$);
          }

          void RinexNavigation::addSystemTimeOffset(const ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemTimeOffset_761b1cc460d40e17], a0.this$);
          }

          ::java::util::List RinexNavigation::getBDGIMMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBDGIMMessages_0d9551367f7ecdef]));
          }

          ::java::util::Map RinexNavigation::getBeidouCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getBeidouCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          ::java::util::Map RinexNavigation::getBeidouLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getBeidouLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          ::java::util::List RinexNavigation::getEarthOrientationParameters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEarthOrientationParameters_0d9551367f7ecdef]));
          }

          ::java::util::Map RinexNavigation::getGPSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getGPSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGPSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getGPSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGalileoNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getGalileoNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGlonassNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getGlonassNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          ::java::util::Map RinexNavigation::getIRNSSNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getIRNSSNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          JArray< jdouble > RinexNavigation::getKlobucharAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharAlpha_a53a7513ecedada2]));
          }

          JArray< jdouble > RinexNavigation::getKlobucharBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharBeta_a53a7513ecedada2]));
          }

          ::java::util::List RinexNavigation::getKlobucharMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getKlobucharMessages_0d9551367f7ecdef]));
          }

          JArray< jdouble > RinexNavigation::getNeQuickAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNeQuickAlpha_a53a7513ecedada2]));
          }

          ::java::util::List RinexNavigation::getNequickGMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNequickGMessages_0d9551367f7ecdef]));
          }

          ::java::util::Map RinexNavigation::getQZSSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getQZSSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          ::java::util::Map RinexNavigation::getQZSSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getQZSSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          ::java::util::Map RinexNavigation::getSBASNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_1e62c2f73fbdd1c4]));
          }

          ::java::util::List RinexNavigation::getSBASNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_112f9b169ddc4fbe], a0.this$));
          }

          ::java::util::List RinexNavigation::getSystemTimeOffsets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemTimeOffsets_0d9551367f7ecdef]));
          }

          void RinexNavigation::setKlobucharAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharAlpha_cc18240f4a737f14], a0.this$);
          }

          void RinexNavigation::setKlobucharBeta(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharBeta_cc18240f4a737f14], a0.this$);
          }

          void RinexNavigation::setNeQuickAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNeQuickAlpha_cc18240f4a737f14], a0.this$);
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
      namespace rinex {
        namespace navigation {
          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args);
          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data);
          static PyGetSetDef t_RinexNavigation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexNavigation, bDGIMMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, earthOrientationParameters),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, galileoNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, glonassNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, iRNSSNavigationMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharAlpha),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharBeta),
            DECLARE_GET_FIELD(t_RinexNavigation, klobucharMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, neQuickAlpha),
            DECLARE_GET_FIELD(t_RinexNavigation, nequickGMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, sBASNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, systemTimeOffsets),
            DECLARE_GET_FIELD(t_RinexNavigation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexNavigation__methods_[] = {
            DECLARE_METHOD(t_RinexNavigation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addBDGIMMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addEarthOrientationParameter, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGPSLegacyNavigationMessage, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addGalileoNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGlonassNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addIRNSSNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addKlobucharMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addNequickGMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSBASNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSystemTimeOffset, METH_O),
            DECLARE_METHOD(t_RinexNavigation, getBDGIMMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getEarthOrientationParameters, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGalileoNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGlonassNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getIRNSSNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharBeta, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNeQuickAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNequickGMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSBASNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSystemTimeOffsets, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharAlpha, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharBeta, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setNeQuickAlpha, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigation)[] = {
            { Py_tp_methods, t_RinexNavigation__methods_ },
            { Py_tp_init, (void *) t_RinexNavigation_init_ },
            { Py_tp_getset, t_RinexNavigation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexNavigation, t_RinexNavigation, RinexNavigation);
          PyObject *t_RinexNavigation::wrap_Object(const RinexNavigation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexNavigation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexNavigation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigation), &PY_TYPE_DEF(RinexNavigation), module, "RinexNavigation", 0);
          }

          void t_RinexNavigation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "class_", make_descriptor(RinexNavigation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "wrapfn_", make_descriptor(t_RinexNavigation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigation::initializeClass, 1)))
              return NULL;
            return t_RinexNavigation::wrap_Object(RinexNavigation(((t_RinexNavigation *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds)
          {
            RinexNavigation object((jobject) NULL);

            INT_CALL(object = RinexNavigation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::navigation::PY_TYPE(RinexNavigationHeader);

            return 0;
          }

          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBDGIMMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBDGIMMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addEarthOrientationParameter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addEarthOrientationParameter", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addGPSLegacyNavigationMessage", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGalileoNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGalileoNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addIRNSSNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addIRNSSNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addKlobucharMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addKlobucharMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addNequickGMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addNequickGMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSBASNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSBASNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSystemTimeOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemTimeOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereBDGIMMessage));
          }

          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(EarthOrientationParameterMessage));
          }

          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGalileoNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGalileoNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GalileoNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGalileoNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGlonassNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGlonassNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GLONASSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGlonassNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getIRNSSNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getIRNSSNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(IRNSSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIRNSSNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharBeta());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereKlobucharMessage));
          }

          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNeQuickAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereNequickGMessage));
          }

          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSBASNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getSBASNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(SBASNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getSBASNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(SystemTimeOffsetMessage));
          }

          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharAlpha", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharBeta(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharBeta", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setNeQuickAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNeQuickAlpha", arg);
            return NULL;
          }
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGalileoNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getIRNSSNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharBeta());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharBeta(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharBeta", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNeQuickAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setNeQuickAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "neQuickAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSBASNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/Omm.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmData.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *Omm::class$ = NULL;
              jmethodID *Omm::mids$ = NULL;
              bool Omm::live$ = false;
              ::java::lang::String *Omm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Omm::ROOT = NULL;

              jclass Omm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/Omm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_25fe3f0c23ce561a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_generateKeplerianOrbit_48360cd036a5e97b] = env->getMethodID(cls, "generateKeplerianOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
                  mids$[mid_generateSpacecraftState_15e85d5301b90ef8] = env->getMethodID(cls, "generateSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
                  mids$[mid_generateTLE_67f978062a0fd0e7] = env->getMethodID(cls, "generateTLE", "()Lorg/orekit/propagation/analytical/tle/TLE;");
                  mids$[mid_getData_374ab60b26a12851] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmData;");
                  mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMetadata_8a5287d2a9885a95] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/omm/OmmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Omm::Omm(const ::org::orekit::files::ccsds::ndm::odm::OdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_25fe3f0c23ce561a, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::orbits::KeplerianOrbit Omm::generateKeplerianOrbit() const
              {
                return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_48360cd036a5e97b]));
              }

              ::org::orekit::propagation::SpacecraftState Omm::generateSpacecraftState() const
              {
                return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_generateSpacecraftState_15e85d5301b90ef8]));
              }

              ::org::orekit::propagation::analytical::tle::TLE Omm::generateTLE() const
              {
                return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generateTLE_67f978062a0fd0e7]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmData Omm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmData(env->callObjectMethod(this$, mids$[mid_getData_374ab60b26a12851]));
              }

              ::org::orekit::time::AbsoluteDate Omm::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
              }

              ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata Omm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_8a5287d2a9885a95]));
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
            namespace omm {
              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args);
              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self);
              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self);
              static PyObject *t_Omm_generateTLE(t_Omm *self);
              static PyObject *t_Omm_getData(t_Omm *self);
              static PyObject *t_Omm_getDate(t_Omm *self);
              static PyObject *t_Omm_getMetadata(t_Omm *self);
              static PyObject *t_Omm_get__data(t_Omm *self, void *data);
              static PyObject *t_Omm_get__date(t_Omm *self, void *data);
              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data);
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data);
              static PyGetSetDef t_Omm__fields_[] = {
                DECLARE_GET_FIELD(t_Omm, data),
                DECLARE_GET_FIELD(t_Omm, date),
                DECLARE_GET_FIELD(t_Omm, metadata),
                DECLARE_GET_FIELD(t_Omm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Omm__methods_[] = {
                DECLARE_METHOD(t_Omm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Omm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Omm, generateKeplerianOrbit, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateSpacecraftState, METH_NOARGS),
                DECLARE_METHOD(t_Omm, generateTLE, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getDate, METH_NOARGS),
                DECLARE_METHOD(t_Omm, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Omm)[] = {
                { Py_tp_methods, t_Omm__methods_ },
                { Py_tp_init, (void *) t_Omm_init_ },
                { Py_tp_getset, t_Omm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Omm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Omm, t_Omm, Omm);
              PyObject *t_Omm::wrap_Object(const Omm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Omm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Omm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Omm *self = (t_Omm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Omm::install(PyObject *module)
              {
                installType(&PY_TYPE(Omm), &PY_TYPE_DEF(Omm), module, "Omm", 0);
              }

              void t_Omm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "class_", make_descriptor(Omm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "wrapfn_", make_descriptor(t_Omm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Omm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Omm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Omm), "ROOT", make_descriptor(j2p(*Omm::ROOT)));
              }

              static PyObject *t_Omm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Omm::initializeClass, 1)))
                  return NULL;
                return t_Omm::wrap_Object(Omm(((t_Omm *) arg)->object.this$));
              }
              static PyObject *t_Omm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Omm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Omm_of_(t_Omm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Omm_init_(t_Omm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Omm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Omm(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_Omm_generateKeplerianOrbit(t_Omm *self)
              {
                ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);
                OBJ_CALL(result = self->object.generateKeplerianOrbit());
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              static PyObject *t_Omm_generateSpacecraftState(t_Omm *self)
              {
                ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
                OBJ_CALL(result = self->object.generateSpacecraftState());
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }

              static PyObject *t_Omm_generateTLE(t_Omm *self)
              {
                ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);
                OBJ_CALL(result = self->object.generateTLE());
                return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
              }

              static PyObject *t_Omm_getData(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(result);
              }

              static PyObject *t_Omm_getDate(t_Omm *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Omm_getMetadata(t_Omm *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(result);
              }
              static PyObject *t_Omm_get__parameters_(t_Omm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Omm_get__data(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmData::wrap_Object(value);
              }

              static PyObject *t_Omm_get__date(t_Omm *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_Omm_get__metadata(t_Omm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::omm::OmmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::omm::t_OmmMetadata::wrap_Object(value);
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
#include "org/orekit/propagation/analytical/tle/FieldSDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSDP4::class$ = NULL;
          jmethodID *FieldSDP4::mids$ = NULL;
          bool FieldSDP4::live$ = false;

          jclass FieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_luniSolarTermsComputation_0640e6acf969ed28] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_thetaG_3eee18bd9e50c57c] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/FieldAbsoluteDate;)D");
              mids$[mid_deepSecularEffects_1ee4bed350fde589] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_1ee4bed350fde589] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpInitialize_5d9c9afaca2e497c] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_960efa47e0a8eec2] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
        namespace tle {
          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args);
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data);
          static PyGetSetDef t_FieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSDP4)[] = {
            { Py_tp_methods, t_FieldSDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSDP4, t_FieldSDP4, FieldSDP4);
          PyObject *t_FieldSDP4::wrap_Object(const FieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSDP4), &PY_TYPE_DEF(FieldSDP4), module, "FieldSDP4", 0);
          }

          void t_FieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "class_", make_descriptor(FieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "wrapfn_", make_descriptor(t_FieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldSDP4::wrap_Object(FieldSDP4(((t_FieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm07Header::class$ = NULL;
              jmethodID *SsrIgm07Header::mids$ = NULL;
              bool SsrIgm07Header::live$ = false;

              jclass SsrIgm07Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm07Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm07Header::SsrIgm07Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
              static PyObject *t_SsrIgm07Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm07Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm07Header_init_(t_SsrIgm07Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm07Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm07Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm07Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm07Header)[] = {
                { Py_tp_methods, t_SsrIgm07Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm07Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm07Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm07Header, t_SsrIgm07Header, SsrIgm07Header);

              void t_SsrIgm07Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm07Header), &PY_TYPE_DEF(SsrIgm07Header), module, "SsrIgm07Header", 0);
              }

              void t_SsrIgm07Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "class_", make_descriptor(SsrIgm07Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "wrapfn_", make_descriptor(t_SsrIgm07Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm07Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm07Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm07Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm07Header::wrap_Object(SsrIgm07Header(((t_SsrIgm07Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm07Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm07Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm07Header_init_(t_SsrIgm07Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm07Header object((jobject) NULL);

                INT_CALL(object = SsrIgm07Header());
                self->object = object;

                return 0;
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
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *CombinedDerivatives::class$ = NULL;
        jmethodID *CombinedDerivatives::mids$ = NULL;
        bool CombinedDerivatives::live$ = false;

        jclass CombinedDerivatives::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/CombinedDerivatives");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_getAdditionalDerivatives_a53a7513ecedada2] = env->getMethodID(cls, "getAdditionalDerivatives", "()[D");
            mids$[mid_getMainStateDerivativesIncrements_a53a7513ecedada2] = env->getMethodID(cls, "getMainStateDerivativesIncrements", "()[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CombinedDerivatives::CombinedDerivatives(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

        JArray< jdouble > CombinedDerivatives::getAdditionalDerivatives() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalDerivatives_a53a7513ecedada2]));
        }

        JArray< jdouble > CombinedDerivatives::getMainStateDerivativesIncrements() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMainStateDerivativesIncrements_a53a7513ecedada2]));
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
      namespace integration {
        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self);
        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data);
        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data);
        static PyGetSetDef t_CombinedDerivatives__fields_[] = {
          DECLARE_GET_FIELD(t_CombinedDerivatives, additionalDerivatives),
          DECLARE_GET_FIELD(t_CombinedDerivatives, mainStateDerivativesIncrements),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CombinedDerivatives__methods_[] = {
          DECLARE_METHOD(t_CombinedDerivatives, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CombinedDerivatives, getAdditionalDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_CombinedDerivatives, getMainStateDerivativesIncrements, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CombinedDerivatives)[] = {
          { Py_tp_methods, t_CombinedDerivatives__methods_ },
          { Py_tp_init, (void *) t_CombinedDerivatives_init_ },
          { Py_tp_getset, t_CombinedDerivatives__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CombinedDerivatives)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CombinedDerivatives, t_CombinedDerivatives, CombinedDerivatives);

        void t_CombinedDerivatives::install(PyObject *module)
        {
          installType(&PY_TYPE(CombinedDerivatives), &PY_TYPE_DEF(CombinedDerivatives), module, "CombinedDerivatives", 0);
        }

        void t_CombinedDerivatives::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "class_", make_descriptor(CombinedDerivatives::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "wrapfn_", make_descriptor(t_CombinedDerivatives::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedDerivatives), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CombinedDerivatives_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CombinedDerivatives::initializeClass, 1)))
            return NULL;
          return t_CombinedDerivatives::wrap_Object(CombinedDerivatives(((t_CombinedDerivatives *) arg)->object.this$));
        }
        static PyObject *t_CombinedDerivatives_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CombinedDerivatives::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CombinedDerivatives_init_(t_CombinedDerivatives *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          CombinedDerivatives object((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            INT_CALL(object = CombinedDerivatives(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CombinedDerivatives_getAdditionalDerivatives(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getAdditionalDerivatives());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_getMainStateDerivativesIncrements(t_CombinedDerivatives *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getMainStateDerivativesIncrements());
          return result.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__additionalDerivatives(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getAdditionalDerivatives());
          return value.wrap();
        }

        static PyObject *t_CombinedDerivatives_get__mainStateDerivativesIncrements(t_CombinedDerivatives *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getMainStateDerivativesIncrements());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/GeometricDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *GeometricDistribution::class$ = NULL;
        jmethodID *GeometricDistribution::mids$ = NULL;
        bool GeometricDistribution::live$ = false;

        jclass GeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/GeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_cumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_557b8123390d8d0c] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_inverseCumulativeProbability_abbeb9db7144ca23] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_69cfb132c661aca4] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_69cfb132c661aca4] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeometricDistribution::GeometricDistribution(jdouble a0) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        jdouble GeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_69cfb132c661aca4], a0);
        }

        jdouble GeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble GeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble GeometricDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_557b8123390d8d0c]);
        }

        jint GeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_412668abc8d889e9]);
        }

        jint GeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_412668abc8d889e9]);
        }

        jint GeometricDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_abbeb9db7144ca23], a0);
        }

        jboolean GeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble GeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_69cfb132c661aca4], a0);
        }

        jdouble GeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_69cfb132c661aca4], a0);
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
      namespace discrete {
        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self);
        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args);
        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data);
        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data);
        static PyGetSetDef t_GeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GeometricDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_GeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_GeometricDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeometricDistribution)[] = {
          { Py_tp_methods, t_GeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_GeometricDistribution_init_ },
          { Py_tp_getset, t_GeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(GeometricDistribution, t_GeometricDistribution, GeometricDistribution);

        void t_GeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GeometricDistribution), &PY_TYPE_DEF(GeometricDistribution), module, "GeometricDistribution", 0);
        }

        void t_GeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "class_", make_descriptor(GeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "wrapfn_", make_descriptor(t_GeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_GeometricDistribution::wrap_Object(GeometricDistribution(((t_GeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_GeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeometricDistribution_init_(t_GeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          GeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = GeometricDistribution(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeometricDistribution_cumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalMean(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GeometricDistribution_getNumericalVariance(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GeometricDistribution_getProbabilityOfSuccess(t_GeometricDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeometricDistribution_getSupportLowerBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_getSupportUpperBound(t_GeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GeometricDistribution_inverseCumulativeProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jdouble a0;
          jint result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_isSupportConnected(t_GeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GeometricDistribution_logProbability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_GeometricDistribution_probability(t_GeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_GeometricDistribution_get__numericalMean(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__numericalVariance(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__probabilityOfSuccess(t_GeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeometricDistribution_get__supportConnected(t_GeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GeometricDistribution_get__supportLowerBound(t_GeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_GeometricDistribution_get__supportUpperBound(t_GeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/SDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *SDP4::class$ = NULL;
          jmethodID *SDP4::mids$ = NULL;
          bool SDP4::live$ = false;

          jclass SDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/SDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_luniSolarTermsComputation_0640e6acf969ed28] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_thetaG_b0b988f941da47d8] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_deepSecularEffects_10f281d777284cea] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_10f281d777284cea] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");
              mids$[mid_sxpInitialize_0640e6acf969ed28] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_10f281d777284cea] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
        namespace tle {
          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SDP4__methods_[] = {
            DECLARE_METHOD(t_SDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SDP4)[] = {
            { Py_tp_methods, t_SDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(SDP4, t_SDP4, SDP4);

          void t_SDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(SDP4), &PY_TYPE_DEF(SDP4), module, "SDP4", 0);
          }

          void t_SDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "class_", make_descriptor(SDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "wrapfn_", make_descriptor(t_SDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SDP4::initializeClass, 1)))
              return NULL;
            return t_SDP4::wrap_Object(SDP4(((t_SDP4 *) arg)->object.this$));
          }
          static PyObject *t_SDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldTransformGenerator.h"
#include "java/util/List.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/FieldTransform.h"
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
          mids$[mid_init$_945544b7f70792c9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_c5683b8e06424542] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransformGenerator::FieldTransformGenerator(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::frames::TransformProvider & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_945544b7f70792c9, a0.this$, a1, a2.this$, a3)) {}

      ::java::util::List FieldTransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_c5683b8e06424542], a0.this$, a1.this$));
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
#include "org/orekit/models/earth/troposphere/ViennaOneModel.h"
#include "java/util/List.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *ViennaOneModel::class$ = NULL;
          jmethodID *ViennaOneModel::mids$ = NULL;
          bool ViennaOneModel::live$ = false;

          jclass ViennaOneModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/ViennaOneModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ab4840ba016ef1da] = env->getMethodID(cls, "<init>", "([D[D)V");
              mids$[mid_init$_efb1066fada7736f] = env->getMethodID(cls, "<init>", "([D[DLorg/orekit/time/TimeScale;)V");
              mids$[mid_computeZenithDelay_fd96fda04d407b93] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_computeZenithDelay_006dc50aa6e193b5] = env->getMethodID(cls, "computeZenithDelay", "(Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_mappingFactors_964dc353437b5da2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");
              mids$[mid_mappingFactors_e6ce6b157ff98280] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_pathDelay_129678f244f63094] = env->getMethodID(cls, "pathDelay", "(DLorg/orekit/bodies/GeodeticPoint;[DLorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_pathDelay_a4fdd877b349d4a6] = env->getMethodID(cls, "pathDelay", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;[Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab4840ba016ef1da, a0.this$, a1.this$)) {}

          ViennaOneModel::ViennaOneModel(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efb1066fada7736f, a0.this$, a1.this$, a2.this$)) {}

          JArray< jdouble > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::GeodeticPoint & a0, const JArray< jdouble > & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_fd96fda04d407b93], a0.this$, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::computeZenithDelay(const ::org::orekit::bodies::FieldGeodeticPoint & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeZenithDelay_006dc50aa6e193b5], a0.this$, a1.this$, a2.this$));
          }

          ::java::util::List ViennaOneModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          JArray< jdouble > ViennaOneModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_964dc353437b5da2], a0, a1.this$, a2.this$));
          }

          JArray< ::org::hipparchus::CalculusFieldElement > ViennaOneModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_e6ce6b157ff98280], a0.this$, a1.this$, a2.this$));
          }

          jdouble ViennaOneModel::pathDelay(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const JArray< jdouble > & a2, const ::org::orekit::time::AbsoluteDate & a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_pathDelay_129678f244f63094], a0, a1.this$, a2.this$, a3.this$);
          }

          ::org::hipparchus::CalculusFieldElement ViennaOneModel::pathDelay(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2, const ::org::orekit::time::FieldAbsoluteDate & a3) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_pathDelay_a4fdd877b349d4a6], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self);
          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args);
          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data);
          static PyGetSetDef t_ViennaOneModel__fields_[] = {
            DECLARE_GET_FIELD(t_ViennaOneModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ViennaOneModel__methods_[] = {
            DECLARE_METHOD(t_ViennaOneModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ViennaOneModel, computeZenithDelay, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ViennaOneModel, mappingFactors, METH_VARARGS),
            DECLARE_METHOD(t_ViennaOneModel, pathDelay, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ViennaOneModel)[] = {
            { Py_tp_methods, t_ViennaOneModel__methods_ },
            { Py_tp_init, (void *) t_ViennaOneModel_init_ },
            { Py_tp_getset, t_ViennaOneModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ViennaOneModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ViennaOneModel, t_ViennaOneModel, ViennaOneModel);

          void t_ViennaOneModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ViennaOneModel), &PY_TYPE_DEF(ViennaOneModel), module, "ViennaOneModel", 0);
          }

          void t_ViennaOneModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "class_", make_descriptor(ViennaOneModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "wrapfn_", make_descriptor(t_ViennaOneModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ViennaOneModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ViennaOneModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ViennaOneModel::initializeClass, 1)))
              return NULL;
            return t_ViennaOneModel::wrap_Object(ViennaOneModel(((t_ViennaOneModel *) arg)->object.this$));
          }
          static PyObject *t_ViennaOneModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ViennaOneModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ViennaOneModel_init_(t_ViennaOneModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[D", &a0, &a1))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ViennaOneModel object((jobject) NULL);

                if (!parseArgs(args, "[D[Dk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ViennaOneModel(a0, a1, a2));
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

          static PyObject *t_ViennaOneModel_computeZenithDelay(t_ViennaOneModel *self, PyObject *args)
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

          static PyObject *t_ViennaOneModel_getParametersDrivers(t_ViennaOneModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ViennaOneModel_mappingFactors(t_ViennaOneModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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
            }

            PyErr_SetArgsError((PyObject *) self, "mappingFactors", args);
            return NULL;
          }

          static PyObject *t_ViennaOneModel_pathDelay(t_ViennaOneModel *self, PyObject *args)
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

          static PyObject *t_ViennaOneModel_get__parametersDrivers(t_ViennaOneModel *self, void *data)
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
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanModel::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanModel::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanModel::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_6f886d47d0124943] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_0640e6acf969ed28] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_7a97f7e149e79afb] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_55b445719d7de2a7] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_0cd5cd5bc4d32a91] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_17da385c0c368282] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_6f113314fca6b7ed] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getNumberSelectedMeasurementDrivers_412668abc8d889e9] = env->getMethodID(cls, "getNumberSelectedMeasurementDrivers", "()I");
            mids$[mid_getNumberSelectedOrbitalDrivers_412668abc8d889e9] = env->getMethodID(cls, "getNumberSelectedOrbitalDrivers", "()I");
            mids$[mid_getNumberSelectedPropagationDrivers_412668abc8d889e9] = env->getMethodID(cls, "getNumberSelectedPropagationDrivers", "()I");
            mids$[mid_getObserver_25fab8044126746b] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_75d50d73180655b4] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_88f7aeb25bb98f36] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_5dccf571345671af] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_8655761ebf04b503] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_c7258c5116598865] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_4275515b1ffe8ceb] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_8655761ebf04b503] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_8655761ebf04b503] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_6f886d47d0124943], a0.this$, a1.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_0640e6acf969ed28]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_5dccf571345671af]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalUnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_7a97f7e149e79afb]));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_412668abc8d889e9]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalUnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_55b445719d7de2a7]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_467d574a7997e53a]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_467d574a7997e53a]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_0cd5cd5bc4d32a91]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution SemiAnalyticalUnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_17da385c0c368282], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_6f113314fca6b7ed], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedMeasurementDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedMeasurementDrivers_412668abc8d889e9]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedOrbitalDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedOrbitalDrivers_412668abc8d889e9]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedPropagationDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedPropagationDrivers_412668abc8d889e9]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalUnscentedKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_25fab8044126746b]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_75d50d73180655b4]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_70a207fcbc031df2]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_70a207fcbc031df2]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_95a396fe45ccbbc0]));
        }

        JArray< ::org::hipparchus::linear::RealVector > SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_88f7aeb25bb98f36], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_5dccf571345671af]));
        }

        void SemiAnalyticalUnscentedKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_8655761ebf04b503], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_c7258c5116598865], a0.this$, a1.this$));
        }

        void SemiAnalyticalUnscentedKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_4275515b1ffe8ceb], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_8655761ebf04b503], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_8655761ebf04b503], a0.this$);
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagator),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedMeasurementDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedOrbitalDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedPropagationDrivers),
          DECLARE_GETSET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, observer),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedMeasurementDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedOrbitalDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedPropagationDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, processMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, setObserver, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanModel)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanModel, t_SemiAnalyticalUnscentedKalmanModel, SemiAnalyticalUnscentedKalmanModel);

        void t_SemiAnalyticalUnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanModel), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanModel), module, "SemiAnalyticalUnscentedKalmanModel", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanModel::wrap_Object(SemiAnalyticalUnscentedKalmanModel(((t_SemiAnalyticalUnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

          if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::hipparchus::linear::RealVector a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a1((jobject) NULL);
          JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

          if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedKalmanFilter::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0, a1));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/python/PythonSupplier.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace python {

      ::java::lang::Class *PythonSupplier::class$ = NULL;
      jmethodID *PythonSupplier::mids$ = NULL;
      bool PythonSupplier::live$ = false;

      jclass PythonSupplier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/python/PythonSupplier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_get_e661fe3ba2fafb22] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonSupplier::PythonSupplier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonSupplier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonSupplier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonSupplier::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args);
      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self);
      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args);
      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data);
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data);
      static PyGetSetDef t_PythonSupplier__fields_[] = {
        DECLARE_GET_FIELD(t_PythonSupplier, self),
        DECLARE_GET_FIELD(t_PythonSupplier, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonSupplier__methods_[] = {
        DECLARE_METHOD(t_PythonSupplier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonSupplier, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonSupplier, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonSupplier, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonSupplier)[] = {
        { Py_tp_methods, t_PythonSupplier__methods_ },
        { Py_tp_init, (void *) t_PythonSupplier_init_ },
        { Py_tp_getset, t_PythonSupplier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonSupplier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonSupplier, t_PythonSupplier, PythonSupplier);
      PyObject *t_PythonSupplier::wrap_Object(const PythonSupplier& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonSupplier::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonSupplier::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonSupplier *self = (t_PythonSupplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonSupplier::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonSupplier), &PY_TYPE_DEF(PythonSupplier), module, "PythonSupplier", 1);
      }

      void t_PythonSupplier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "class_", make_descriptor(PythonSupplier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "wrapfn_", make_descriptor(t_PythonSupplier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSupplier), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonSupplier::initializeClass);
        JNINativeMethod methods[] = {
          { "get", "()Ljava/lang/Object;", (void *) t_PythonSupplier_get0 },
          { "pythonDecRef", "()V", (void *) t_PythonSupplier_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonSupplier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonSupplier::initializeClass, 1)))
          return NULL;
        return t_PythonSupplier::wrap_Object(PythonSupplier(((t_PythonSupplier *) arg)->object.this$));
      }
      static PyObject *t_PythonSupplier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonSupplier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonSupplier_of_(t_PythonSupplier *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonSupplier_init_(t_PythonSupplier *self, PyObject *args, PyObject *kwds)
      {
        PythonSupplier object((jobject) NULL);

        INT_CALL(object = PythonSupplier());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonSupplier_finalize(t_PythonSupplier *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonSupplier_pythonExtension(t_PythonSupplier *self, PyObject *args)
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

      static jobject JNICALL t_PythonSupplier_get0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::Object value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "get", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "o", &value))
        {
          throwTypeError("get", result);
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

      static void JNICALL t_PythonSupplier_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonSupplier::mids$[PythonSupplier::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonSupplier_get__self(t_PythonSupplier *self, void *data)
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
      static PyObject *t_PythonSupplier_get__parameters_(t_PythonSupplier *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *SupportBallGenerator::class$ = NULL;
        jmethodID *SupportBallGenerator::mids$ = NULL;
        bool SupportBallGenerator::live$ = false;

        jclass SupportBallGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/SupportBallGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_ballOnSupport_7c06e55e72f854ed] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::enclosing::EnclosingBall SupportBallGenerator::ballOnSupport(const ::java::util::List & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_7c06e55e72f854ed], a0.this$));
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
      namespace enclosing {
        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args);
        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg);
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data);
        static PyGetSetDef t_SupportBallGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_SupportBallGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SupportBallGenerator__methods_[] = {
          DECLARE_METHOD(t_SupportBallGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SupportBallGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_SupportBallGenerator, ballOnSupport, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SupportBallGenerator)[] = {
          { Py_tp_methods, t_SupportBallGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SupportBallGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SupportBallGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SupportBallGenerator, t_SupportBallGenerator, SupportBallGenerator);
        PyObject *t_SupportBallGenerator::wrap_Object(const SupportBallGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_SupportBallGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_SupportBallGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SupportBallGenerator *self = (t_SupportBallGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_SupportBallGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(SupportBallGenerator), &PY_TYPE_DEF(SupportBallGenerator), module, "SupportBallGenerator", 0);
        }

        void t_SupportBallGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "class_", make_descriptor(SupportBallGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "wrapfn_", make_descriptor(t_SupportBallGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SupportBallGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SupportBallGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SupportBallGenerator::initializeClass, 1)))
            return NULL;
          return t_SupportBallGenerator::wrap_Object(SupportBallGenerator(((t_SupportBallGenerator *) arg)->object.this$));
        }
        static PyObject *t_SupportBallGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SupportBallGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SupportBallGenerator_of_(t_SupportBallGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SupportBallGenerator_ballOnSupport(t_SupportBallGenerator *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(result = self->object.ballOnSupport(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
          return NULL;
        }
        static PyObject *t_SupportBallGenerator_get__parameters_(t_SupportBallGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/SpinStabilized.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *SpinStabilized::class$ = NULL;
      jmethodID *SpinStabilized::mids$ = NULL;
      bool SpinStabilized::live$ = false;

      jclass SpinStabilized::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/SpinStabilized");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8f0a7a57ebfb39ba] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getUnderlyingAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SpinStabilized::SpinStabilized(const ::org::orekit::attitudes::AttitudeProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f0a7a57ebfb39ba, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::attitudes::Attitude SpinStabilized::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude SpinStabilized::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider SpinStabilized::getUnderlyingAttitudeProvider() const
      {
        return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getUnderlyingAttitudeProvider_6df6b78ab9377151]));
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
      static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SpinStabilized_getAttitude(t_SpinStabilized *self, PyObject *args);
      static PyObject *t_SpinStabilized_getUnderlyingAttitudeProvider(t_SpinStabilized *self);
      static PyObject *t_SpinStabilized_get__underlyingAttitudeProvider(t_SpinStabilized *self, void *data);
      static PyGetSetDef t_SpinStabilized__fields_[] = {
        DECLARE_GET_FIELD(t_SpinStabilized, underlyingAttitudeProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SpinStabilized__methods_[] = {
        DECLARE_METHOD(t_SpinStabilized, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpinStabilized, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SpinStabilized, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_SpinStabilized, getUnderlyingAttitudeProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SpinStabilized)[] = {
        { Py_tp_methods, t_SpinStabilized__methods_ },
        { Py_tp_init, (void *) t_SpinStabilized_init_ },
        { Py_tp_getset, t_SpinStabilized__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SpinStabilized)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SpinStabilized, t_SpinStabilized, SpinStabilized);

      void t_SpinStabilized::install(PyObject *module)
      {
        installType(&PY_TYPE(SpinStabilized), &PY_TYPE_DEF(SpinStabilized), module, "SpinStabilized", 0);
      }

      void t_SpinStabilized::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "class_", make_descriptor(SpinStabilized::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "wrapfn_", make_descriptor(t_SpinStabilized::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SpinStabilized), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SpinStabilized_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SpinStabilized::initializeClass, 1)))
          return NULL;
        return t_SpinStabilized::wrap_Object(SpinStabilized(((t_SpinStabilized *) arg)->object.this$));
      }
      static PyObject *t_SpinStabilized_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SpinStabilized::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SpinStabilized_init_(t_SpinStabilized *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
        jdouble a3;
        SpinStabilized object((jobject) NULL);

        if (!parseArgs(args, "kkkD", ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = SpinStabilized(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SpinStabilized_getAttitude(t_SpinStabilized *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_SpinStabilized_getUnderlyingAttitudeProvider(t_SpinStabilized *self)
      {
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
      }

      static PyObject *t_SpinStabilized_get__underlyingAttitudeProvider(t_SpinStabilized *self, void *data)
      {
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getUnderlyingAttitudeProvider());
        return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeCovariance::class$ = NULL;
              jmethodID *AttitudeCovariance::mids$ = NULL;
              bool AttitudeCovariance::live$ = false;

              jclass AttitudeCovariance::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovariance");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_bb99cd754d655876] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;Lorg/orekit/time/AbsoluteDate;[Ljava/lang/String;I)V");
                  mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getMatrix_b1a245683de9728d] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/DiagonalMatrix;");
                  mids$[mid_getType_270107b6f5cd254c] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeCovariance::AttitudeCovariance(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< ::java::lang::String > & a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb99cd754d655876, a0.this$, a1.this$, a2.this$, a3)) {}

              ::org::orekit::time::AbsoluteDate AttitudeCovariance::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
              }

              ::org::hipparchus::linear::DiagonalMatrix AttitudeCovariance::getMatrix() const
              {
                return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_b1a245683de9728d]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeCovariance::getType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getType_270107b6f5cd254c]));
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
          namespace adm {
            namespace acm {
              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self);
              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data);
              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data);
              static PyGetSetDef t_AttitudeCovariance__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovariance, date),
                DECLARE_GET_FIELD(t_AttitudeCovariance, matrix),
                DECLARE_GET_FIELD(t_AttitudeCovariance, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovariance__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovariance, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovariance, getDate, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeCovariance, getType, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovariance)[] = {
                { Py_tp_methods, t_AttitudeCovariance__methods_ },
                { Py_tp_init, (void *) t_AttitudeCovariance_init_ },
                { Py_tp_getset, t_AttitudeCovariance__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovariance)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeCovariance, t_AttitudeCovariance, AttitudeCovariance);

              void t_AttitudeCovariance::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovariance), &PY_TYPE_DEF(AttitudeCovariance), module, "AttitudeCovariance", 0);
              }

              void t_AttitudeCovariance::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "class_", make_descriptor(AttitudeCovariance::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "wrapfn_", make_descriptor(t_AttitudeCovariance::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovariance), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeCovariance_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovariance::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovariance::wrap_Object(AttitudeCovariance(((t_AttitudeCovariance *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovariance_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovariance::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeCovariance_init_(t_AttitudeCovariance *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
                JArray< ::java::lang::String > a2((jobject) NULL);
                jint a3;
                AttitudeCovariance object((jobject) NULL);

                if (!parseArgs(args, "Kk[sI", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_, &a1, &a2, &a3))
                {
                  INT_CALL(object = AttitudeCovariance(a0, a1, a2, a3));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeCovariance_getDate(t_AttitudeCovariance *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getMatrix(t_AttitudeCovariance *self)
              {
                ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_getType(t_AttitudeCovariance *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeCovariance_get__date(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__matrix(t_AttitudeCovariance *self, void *data)
              {
                ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getMatrix());
                return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudeCovariance_get__type(t_AttitudeCovariance *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
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
#include "org/orekit/attitudes/TargetPointing.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TargetPointing::class$ = NULL;
      jmethodID *TargetPointing::mids$ = NULL;
      bool TargetPointing::live$ = false;

      jclass TargetPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TargetPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d8e03270a3daa2ee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_6d8eab5c7bf95fd9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/BodyShape;)V");
          mids$[mid_getTargetPV_ee00ab612436435b] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getTargetPV_9e0119a6fef31431] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_d8e03270a3daa2ee, a0.this$, a1.this$, a2.this$)) {}

      TargetPointing::TargetPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::BodyShape & a2) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_6d8eab5c7bf95fd9, a0.this$, a1.this$, a2.this$)) {}

      ::org::orekit::utils::TimeStampedPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ee00ab612436435b], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates TargetPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_9e0119a6fef31431], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args);

      static PyMethodDef t_TargetPointing__methods_[] = {
        DECLARE_METHOD(t_TargetPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TargetPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TargetPointing)[] = {
        { Py_tp_methods, t_TargetPointing__methods_ },
        { Py_tp_init, (void *) t_TargetPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TargetPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(TargetPointing, t_TargetPointing, TargetPointing);

      void t_TargetPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(TargetPointing), &PY_TYPE_DEF(TargetPointing), module, "TargetPointing", 0);
      }

      void t_TargetPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "class_", make_descriptor(TargetPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "wrapfn_", make_descriptor(t_TargetPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TargetPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TargetPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TargetPointing::initializeClass, 1)))
          return NULL;
        return t_TargetPointing::wrap_Object(TargetPointing(((t_TargetPointing *) arg)->object.this$));
      }
      static PyObject *t_TargetPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TargetPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TargetPointing_init_(t_TargetPointing *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::BodyShape a2((jobject) NULL);
            TargetPointing object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TargetPointing(a0, a1, a2));
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

      static PyObject *t_TargetPointing_getTargetPV(t_TargetPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *AppliedPCVS::class$ = NULL;
        jmethodID *AppliedPCVS::mids$ = NULL;
        bool AppliedPCVS::live$ = false;

        jclass AppliedPCVS::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/AppliedPCVS");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3c3b8d2681241227] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;Ljava/lang/String;Ljava/lang/String;)V");
            mids$[mid_getProgPCVS_3cffd47377eca18a] = env->getMethodID(cls, "getProgPCVS", "()Ljava/lang/String;");
            mids$[mid_getSatelliteSystem_8b86408cc2633961] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
            mids$[mid_getSourcePCVS_3cffd47377eca18a] = env->getMethodID(cls, "getSourcePCVS", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AppliedPCVS::AppliedPCVS(const ::org::orekit::gnss::SatelliteSystem & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c3b8d2681241227, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String AppliedPCVS::getProgPCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgPCVS_3cffd47377eca18a]));
        }

        ::org::orekit::gnss::SatelliteSystem AppliedPCVS::getSatelliteSystem() const
        {
          return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_8b86408cc2633961]));
        }

        ::java::lang::String AppliedPCVS::getSourcePCVS() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourcePCVS_3cffd47377eca18a]));
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
      namespace rinex {
        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self);
        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data);
        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data);
        static PyGetSetDef t_AppliedPCVS__fields_[] = {
          DECLARE_GET_FIELD(t_AppliedPCVS, progPCVS),
          DECLARE_GET_FIELD(t_AppliedPCVS, satelliteSystem),
          DECLARE_GET_FIELD(t_AppliedPCVS, sourcePCVS),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AppliedPCVS__methods_[] = {
          DECLARE_METHOD(t_AppliedPCVS, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AppliedPCVS, getProgPCVS, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSatelliteSystem, METH_NOARGS),
          DECLARE_METHOD(t_AppliedPCVS, getSourcePCVS, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AppliedPCVS)[] = {
          { Py_tp_methods, t_AppliedPCVS__methods_ },
          { Py_tp_init, (void *) t_AppliedPCVS_init_ },
          { Py_tp_getset, t_AppliedPCVS__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AppliedPCVS)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AppliedPCVS, t_AppliedPCVS, AppliedPCVS);

        void t_AppliedPCVS::install(PyObject *module)
        {
          installType(&PY_TYPE(AppliedPCVS), &PY_TYPE_DEF(AppliedPCVS), module, "AppliedPCVS", 0);
        }

        void t_AppliedPCVS::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "class_", make_descriptor(AppliedPCVS::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "wrapfn_", make_descriptor(t_AppliedPCVS::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AppliedPCVS), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AppliedPCVS_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AppliedPCVS::initializeClass, 1)))
            return NULL;
          return t_AppliedPCVS::wrap_Object(AppliedPCVS(((t_AppliedPCVS *) arg)->object.this$));
        }
        static PyObject *t_AppliedPCVS_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AppliedPCVS::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AppliedPCVS_init_(t_AppliedPCVS *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          ::java::lang::String a2((jobject) NULL);
          AppliedPCVS object((jobject) NULL);

          if (!parseArgs(args, "Kss", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
          {
            INT_CALL(object = AppliedPCVS(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AppliedPCVS_getProgPCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProgPCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_getSatelliteSystem(t_AppliedPCVS *self)
        {
          ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
        }

        static PyObject *t_AppliedPCVS_getSourcePCVS(t_AppliedPCVS *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSourcePCVS());
          return j2p(result);
        }

        static PyObject *t_AppliedPCVS_get__progPCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProgPCVS());
          return j2p(value);
        }

        static PyObject *t_AppliedPCVS_get__satelliteSystem(t_AppliedPCVS *self, void *data)
        {
          ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatelliteSystem());
          return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
        }

        static PyObject *t_AppliedPCVS_get__sourcePCVS(t_AppliedPCVS *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSourcePCVS());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider::mids$ = NULL;
          bool RawSphericalHarmonicsProvider::live$ = false;

          jclass RawSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_onDate_5db0dfc8bd8b9574] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics RawSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_5db0dfc8bd8b9574], a0.this$));
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
          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg);

          static PyMethodDef t_RawSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::SphericalHarmonicsProvider),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider, t_RawSphericalHarmonicsProvider, RawSphericalHarmonicsProvider);

          void t_RawSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider), &PY_TYPE_DEF(RawSphericalHarmonicsProvider), module, "RawSphericalHarmonicsProvider", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "RawSphericalHarmonics", make_descriptor(&PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics)));
          }

          void t_RawSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "class_", make_descriptor(RawSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider::wrap_Object(RawSphericalHarmonicsProvider(((t_RawSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider_onDate(t_RawSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
